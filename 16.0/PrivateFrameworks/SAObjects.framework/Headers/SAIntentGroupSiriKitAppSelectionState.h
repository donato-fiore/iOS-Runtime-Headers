// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPSIRIKITAPPSELECTIONSTATE_H
#define SAINTENTGROUPSIRIKITAPPSELECTIONSTATE_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SASyncAppIdentifyingInfo.h"

@interface SAIntentGroupSiriKitAppSelectionState : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *appConfirmationState;
@property (copy, nonatomic) NSString *appCorrectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *eligibleApps;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASyncAppIdentifyingInfo *requestedApp;
@property (readonly) Class superclass;


+(id)siriKitAppSelectionState;
+(id)siriKitAppSelectionStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif