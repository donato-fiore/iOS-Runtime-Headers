// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETMAPVIEWANNOTATION_H
#define OKWIDGETMAPVIEWANNOTATION_H

@class MKPointAnnotation, NSString;
@protocol OKSettingsSupport;



@interface OKWidgetMapViewAnnotation : MKPointAnnotation <OKSettingsSupport>



@property (readonly, copy, nonatomic) NSString *actionScript; // ivar: _actionScript
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)supportedSettings;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif