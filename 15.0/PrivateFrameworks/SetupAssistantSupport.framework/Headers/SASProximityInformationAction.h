// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPROXIMITYINFORMATIONACTION_H
#define SASPROXIMITYINFORMATIONACTION_H



#import "SASProximityAction.h"
#import "SASProximityInformation.h"

@interface SASProximityInformationAction : SASProximityAction

@property (retain) SASProximityInformation *information; // ivar: _information


+(NSUInteger)actionID;
-(BOOL)hasResponse;
-(id)init;
-(id)responsePayload;
-(void)setResponseFromData:(id)arg0 ;


@end


#endif