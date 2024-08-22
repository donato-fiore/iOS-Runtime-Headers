// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACQUISITIONREQUEST_H
#define VUIACQUISITIONREQUEST_H


#import <Foundation/Foundation.h>

#import "VUIStoreAcquisitionProperties.h"

@interface VUIAcquisitionRequest : NSObject

@property (getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) VUIStoreAcquisitionProperties *properties; // ivar: _properties




@end


#endif