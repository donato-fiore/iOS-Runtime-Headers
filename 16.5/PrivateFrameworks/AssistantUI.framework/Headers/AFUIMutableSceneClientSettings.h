// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUIMUTABLESCENECLIENTSETTINGS_H
#define AFUIMUTABLESCENECLIENTSETTINGS_H

@class UIMutableApplicationSceneClientSettings, NSString;
@protocol AFUISceneClientSettings;



@interface AFUIMutableSceneClientSettings : UIMutableApplicationSceneClientSettings <AFUISceneClientSettings>



@property (nonatomic) unsigned int clientWindowContextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif