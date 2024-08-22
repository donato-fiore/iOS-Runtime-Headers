// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMEXECUTEREQUEST_H
#define HMEXECUTEREQUEST_H

@class NSString;
@protocol HMExecuteOperation;


#import "HMRequestBase.h"
#import "HMActionSet.h"

@interface HMExecuteRequest : HMRequestBase <HMExecuteOperation>



@property (readonly, nonatomic) HMActionSet *actionSet; // ivar: _actionSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)executeRequestWithActionSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithActionSet:(id)arg0 ;


@end


#endif