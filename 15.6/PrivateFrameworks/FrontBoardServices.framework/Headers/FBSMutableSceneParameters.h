// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSMUTABLESCENEPARAMETERS_H
#define FBSMUTABLESCENEPARAMETERS_H



#import "FBSSceneParameters.h"
#import "FBSDisplayConfiguration.h"
#import "FBSSceneClientSettings.h"
#import "FBSSceneSettings.h"
#import "FBSSceneSpecification.h"

@interface FBSMutableSceneParameters : FBSSceneParameters {
    FBSDisplayConfiguration *_displayConfiguration;
}


@property (copy, nonatomic) FBSSceneClientSettings *clientSettings;
@property (copy, nonatomic) FBSSceneSettings *settings;
@property (copy, nonatomic, setter=_setSpecification:) FBSSceneSpecification *specification;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applyParameters:(id)arg0 ;
-(void)setDisplay:(id)arg0 ;
-(void)updateClientSettingsWithBlock:(id)arg0 ;
-(void)updateSettingsWithBlock:(id)arg0 ;


@end


#endif