// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSDEVICESETTINGS_H
#define IKJSDEVICESETTINGS_H

@class NSString;
@protocol NSObject, IKJSDeviceSettings, _IKJSDeviceSettingsProxy, _IKJSDeviceSettings, IKAppDeviceConfig;


#import "IKJSObject.h"
#import "IKJSRestrictions.h"

@interface IKJSDeviceSettings : IKJSObject <NSObject, IKJSDeviceSettings, _IKJSDeviceSettingsProxy, _IKJSDeviceSettings>

 {
    id *_restrictionDidChangeToken;
}


@property (readonly, nonatomic) IKJSRestrictions *Restrictions;
@property (readonly, nonatomic) CGSize Screen;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<IKAppDeviceConfig> *deviceConfig; // ivar: _deviceConfig
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSString *language;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSString *preferredVideoFormat;
@property (readonly, retain, nonatomic) NSString *preferredVideoPreviewFormat;
@property (readonly, nonatomic) IKJSRestrictions *restrictions;
@property (readonly, nonatomic) CGSize screen;
@property (readonly, retain, nonatomic) NSString *storefrontCountryCode;
@property (readonly) Class superclass;


-(id)_formatStringForVideoFormat:(NSUInteger)arg0 ;
-(id)asPrivateIKJSDeviceSettings;
-(id)initWithAppContext:(id)arg0 deviceConfig:(id)arg1 ;
-(void)_restrictionsDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif