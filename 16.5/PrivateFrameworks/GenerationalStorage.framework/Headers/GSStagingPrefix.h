// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GSSTAGINGPREFIX_H
#define GSSTAGINGPREFIX_H

@class NSString, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface GSStagingPrefix : NSObject {
    unsigned char _volumeUUID;
    int _deviceID;
    NSString *_path;
    NSArray *_pathComponents;
    NSData *_extension;
    NSInteger _sandboxHandle;
}




-(BOOL)_refreshWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStagedPath:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithDocumentID:(id)arg0 ;
-(id)stagingPathforCreatingAdditionWithError:(*id)arg0 ;
-(void)_connectionWithDaemonWasLost;
-(void)_invalidate:(BOOL)arg0 ;
-(void)cleanupStagingPath:(id)arg0 ;
-(void)dealloc;
-(void)finalize;


@end


#endif