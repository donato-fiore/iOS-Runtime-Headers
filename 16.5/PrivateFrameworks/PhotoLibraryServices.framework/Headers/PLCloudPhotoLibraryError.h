// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDPHOTOLIBRARYERROR_H
#define PLCLOUDPHOTOLIBRARYERROR_H


#import <Foundation/Foundation.h>


@interface PLCloudPhotoLibraryError : NSObject



+(id)createErrorWithType:(NSInteger)arg0 ;
+(id)createErrorWithType:(NSInteger)arg0 withDebugMessage:(id)arg1 ;
+(id)userMessageForErrorType:(NSInteger)arg0 ;


@end


#endif