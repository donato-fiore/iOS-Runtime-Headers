// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBOBSERVERGATEWAYENUMERATOR_H
#define BBOBSERVERGATEWAYENUMERATOR_H

@class NSArray, NSMutableSet;

#import <Foundation/Foundation.h>

#import "BBBulletin.h"

@interface BBObserverGatewayEnumerator : NSObject

@property (retain, nonatomic) BBBulletin *bulletin; // ivar: _bulletin
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (nonatomic) NSUInteger feeds; // ivar: _feeds
@property (nonatomic) CGFloat gatewayTimeout; // ivar: _gatewayTimeout
@property (copy, nonatomic) NSArray *gateways; // ivar: _gateways
@property (retain, nonatomic) NSMutableSet *gatewaysPlayedLightsAndSirens; // ivar: _gatewaysPlayedLightsAndSirens


-(id)defaultGateway;
-(id)init;
-(void)attemptNextGatewayInEnumerator:(id)arg0 playLightsAndSirens:(BOOL)arg1 completion:(id)arg2 ;
-(void)cancel;
-(void)enumerateWithCompletion:(id)arg0 ;
-(void)sendToDefaultGatewayToPlayLightsAndSirens:(BOOL)arg0 ;


@end


#endif