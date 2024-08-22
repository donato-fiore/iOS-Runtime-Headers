// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASPROXIMITYPASSCODEVALIDATIONACTION_H
#define SASPROXIMITYPASSCODEVALIDATIONACTION_H

@class NSString;


#import "SASProximityAction.h"

@interface SASProximityPasscodeValidationAction : SASProximityAction

@property (retain) NSString *passcode; // ivar: _passcode
@property BOOL passcodeValid; // ivar: _passcodeValid


+(NSUInteger)actionID;
+(id)actionFromDictionary:(id)arg0 ;
-(BOOL)hasResponse;
-(id)requestPayload;
-(id)responsePayload;
-(void)setResponseFromData:(id)arg0 ;


@end


#endif