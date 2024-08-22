// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCLOUDKITMIRRORINGDELEGATERESETREQUEST_H
#define NSCLOUDKITMIRRORINGDELEGATERESETREQUEST_H

@class NSError;


#import "NSCloudKitMirroringRequest.h"

@interface NSCloudKitMirroringDelegateResetRequest : NSCloudKitMirroringRequest {
    NSError *_causedByError;
}




-(id)initWithError:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif