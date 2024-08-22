// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRUIMUTABLEMODALSCENESETTINGS_H
#define PRUIMUTABLEMODALSCENESETTINGS_H

@class UIMutableApplicationSceneSettings;
@protocol PRUIModalEntryPoint;



@interface PRUIMutableModalSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) NSObject<PRUIModalEntryPoint> *entryPoint;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif