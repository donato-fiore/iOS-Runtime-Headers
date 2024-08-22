// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISONEWOFFERREQUEST_H
#define ISONEWOFFERREQUEST_H


#import <Foundation/Foundation.h>


@interface ISONewOfferRequest : NSObject

@property int litmusBucketId; // ivar: litmusBucketId
@property int litmusExperimentId; // ivar: litmusExperimentId
@property NSUInteger litmusExperimentState; // ivar: litmusExperimentState
@property int litmusGroupId; // ivar: litmusGroupId
@property CGFloat mlServerScore; // ivar: mlServerScore


-(id)init;


@end


#endif