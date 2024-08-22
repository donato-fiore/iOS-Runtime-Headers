// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSRECEIVERPREFERENCES_H
#define CSRECEIVERPREFERENCES_H

@class NSDictionary;


#import "CoreSpotlightPreferences.h"

@interface CSReceiverPreferences : CoreSpotlightPreferences

@property (readonly, copy, nonatomic) NSDictionary *dictionary;


-(id)init;
-(void)disableBundleIdentifier:(id)arg0 ;
-(void)enableBundleIdentifier:(id)arg0 ;


@end


#endif