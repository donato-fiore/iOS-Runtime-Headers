// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLMUTABLEPEOPLEENTITYSCENESETTINGS_H
#define PPLMUTABLEPEOPLEENTITYSCENESETTINGS_H

@class UIMutableApplicationSceneSettings, NSURL;



@interface PPLMutablePeopleEntitySceneSettings : UIMutableApplicationSceneSettings

@property (retain, nonatomic) NSURL *url;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif