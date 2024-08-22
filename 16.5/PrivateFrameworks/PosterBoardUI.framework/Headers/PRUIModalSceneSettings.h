// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUIMODALSCENESETTINGS_H
#define PRUIMODALSCENESETTINGS_H

@class UIApplicationSceneSettings;
@protocol PRUIModalEntryPoint;



@interface PRUIModalSceneSettings : UIApplicationSceneSettings

@property (readonly, copy, nonatomic) NSObject<PRUIModalEntryPoint> *entryPoint;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif