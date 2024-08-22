// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHSHARE_H
#define PHSHARE_H

@class NSString, NSDate, NSURL;
@protocol PHShare;

#import <Foundation/Foundation.h>


@interface PHShare : NSObject <PHShare>

 {
    NSString *_singletonPhotoLibraryPath;
}


@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) short publicPermission;
@property (readonly, nonatomic) short publishState;
@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) unsigned short status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned short trashedState;


+(id)PHShareErrorFromError:(id)arg0 ;
+(void)acceptShareWithUUID:(id)arg0 photoLibrary:(id)arg1 completion:(id)arg2 ;
+(void)fetchShareFromShareURL:(id)arg0 ignoreExistingShare:(BOOL)arg1 photoLibrary:(id)arg2 completionHandler:(id)arg3 ;
+(void)publishShareWithUUID:(id)arg0 photoLibrary:(id)arg1 completion:(id)arg2 ;
-(id)init;


@end


#endif