// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFILEUTILITIES_H
#define CNFILEUTILITIES_H

@protocol CNFileServices;

#import <Foundation/Foundation.h>


@interface CNFileUtilities : NSObject {
    id<CNFileServices> *_services;
}




+(id)fileLock;
+(id)initializeFileLock;
+(id)os_log;
+(id)requestSharedLockDirectoryURLWithFileServices:(id)arg0 ;
+(id)sharedInstance;
+(id)sharedLockDirectoryURLWithFileServices:(id)arg0 ;
-(BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg0 ;
-(id)init;
-(id)initWithFileServices:(id)arg0 ;
-(id)proxyLockUrlForFileAtUrl:(id)arg0 ;
-(id)sharedLockDirectoryUrl;
-(id)sharedLockUrlWithName:(id)arg0 ;


@end


#endif