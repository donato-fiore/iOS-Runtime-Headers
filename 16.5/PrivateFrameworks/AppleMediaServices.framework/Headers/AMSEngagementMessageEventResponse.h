// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTMESSAGEEVENTRESPONSE_H
#define AMSENGAGEMENTMESSAGEEVENTRESPONSE_H

@class NSArray;


#import "AMSEngagementEnqueueResult.h"

@interface AMSEngagementMessageEventResponse : AMSEngagementEnqueueResult

@property (readonly, nonatomic) NSArray *messageActions; // ivar: _messageActions


-(id)initWithEnqueueResult:(id)arg0 ;
-(void)_processActions:(id)arg0 ;


@end


#endif