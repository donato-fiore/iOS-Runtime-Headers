// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINTENTDYNAMICRESOLUTIONREQUEST_H
#define WFINTENTDYNAMICRESOLUTIONREQUEST_H


#import <Foundation/Foundation.h>


@interface WFIntentDynamicResolutionRequest : NSObject

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) id *resolutionBlock; // ivar: _resolutionBlock


-(id)init;
-(void)cancel;


@end


#endif