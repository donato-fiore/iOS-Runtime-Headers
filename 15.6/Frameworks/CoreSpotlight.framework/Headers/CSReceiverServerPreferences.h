// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSRECEIVERSERVERPREFERENCES_H
#define CSRECEIVERSERVERPREFERENCES_H

@class NSSet;


#import "CoreSpotlightPreferences.h"

@interface CSReceiverServerPreferences : CoreSpotlightPreferences

@property (readonly, copy, nonatomic) NSSet *disabledServices;


-(id)init;
-(void)disableService:(id)arg0 ;
-(void)enableService:(id)arg0 ;


@end


#endif