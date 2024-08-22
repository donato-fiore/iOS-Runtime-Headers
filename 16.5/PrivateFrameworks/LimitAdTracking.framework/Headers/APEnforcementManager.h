// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APENFORCEMENTMANAGER_H
#define APENFORCEMENTMANAGER_H


#import <Foundation/Foundation.h>


@interface APEnforcementManager : NSObject



-(BOOL)adServicesEnabled:(id)arg0 ;
-(BOOL)loggingEnabled;
-(BOOL)shouldShowTCCWithAds;
-(id)disabledReasons;


@end


#endif