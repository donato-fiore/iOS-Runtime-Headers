// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAINTENTGROUPACEBARGEINSTATE_H
#define SAINTENTGROUPACEBARGEINSTATE_H

@class NSArray, NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupAceBargeInState : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *bargeInModes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif