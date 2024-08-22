// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCONFIGURATIONPRESET_H
#define AVTCONFIGURATIONPRESET_H


#import <Foundation/Foundation.h>


@interface AVTConfigurationPreset : NSObject

@property (readonly, nonatomic, getter=isDefaultPreset) BOOL defaultPreset; // ivar: _defaultPreset
@property (readonly, nonatomic) id *preset; // ivar: _preset
@property (readonly, nonatomic) ? settingKind; // ivar: _settingKind


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDefaultPresetForSettingKind:(struct ? )arg0 ;
-(id)initWithPreset:(id)arg0 settingKind:(struct ? )arg1 ;


@end


#endif