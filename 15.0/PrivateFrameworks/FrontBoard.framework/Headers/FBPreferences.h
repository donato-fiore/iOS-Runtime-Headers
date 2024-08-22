// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBPREFERENCES_H
#define FBPREFERENCES_H

@class BSAbstractDefaultDomain;



@interface FBPreferences : BSAbstractDefaultDomain

@property (readonly, nonatomic) BOOL disableXPCServicesEndpointHack;


+(id)sharedInstance;
-(id)_init;
-(void)_bindAndRegisterDefaults;


@end


#endif