// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASPROXIMITYCOMPANIONAUTHREQUESTACTION_H
#define SASPROXIMITYCOMPANIONAUTHREQUESTACTION_H

@class ACAccount, AKDevice;


#import "SASProximityAction.h"

@interface SASProximityCompanionAuthRequestAction : SASProximityAction

@property (retain) ACAccount *account; // ivar: _account
@property (retain) AKDevice *companionDevice; // ivar: _companionDevice


+(NSUInteger)actionID;
-(BOOL)hasResponse;
-(id)idmsAccountForiCloud;
-(id)responsePayload;
-(void)setResponseFromData:(id)arg0 ;


@end


#endif