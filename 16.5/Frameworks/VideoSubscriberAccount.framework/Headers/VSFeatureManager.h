// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSFEATUREMANAGER_H
#define VSFEATUREMANAGER_H


#import <Foundation/Foundation.h>

#import "VSPreferences.h"

@interface VSFeatureManager : NSObject

@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences


+(id)sharedFeatureManager;
-(BOOL)featureIsEnabled:(id)arg0 ;
-(id)init;
-(void)disableFeature:(id)arg0 ;
-(void)enableFeature:(id)arg0 ;
-(void)resetFeature:(id)arg0 ;


@end


#endif