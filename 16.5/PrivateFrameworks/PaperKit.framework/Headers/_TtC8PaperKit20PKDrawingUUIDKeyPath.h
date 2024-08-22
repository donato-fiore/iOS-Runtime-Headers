// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT20PKDRAWINGUUIDKEYPATH_H
#define _TTC8PAPERKIT20PKDRAWINGUUIDKEYPATH_H

@class NSData, NSString;
@protocol PKDrawingUUID;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit20PKDrawingUUIDKeyPath : NSObject <PKDrawingUUID>

 {
    ? keypath;
}


@property (nonatomic, readonly) NSData *AES128Key;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *uniqueCacheFilePath;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif