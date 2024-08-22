// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKMATERIAL_H
#define OKMATERIAL_H

@class NSString;
@protocol OKSettingsSupport, OKWidgetProtocol;

#import <Foundation/Foundation.h>

#import "OKPresentationMaterial.h"

@interface OKMaterial : NSObject <OKSettingsSupport>

 {
    OKPresentationMaterial *_material;
    BOOL _needsApplySettings;
    BOOL _hasSettingsApplied;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) NSObject<OKWidgetProtocol> *parentWidget; // ivar: _parentWidget
@property (readonly) Class superclass;


+(id)supportedSettings;
-(id)initWithMaterial:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)applySettings;
-(void)applySettingsIfNeeded;
-(void)dealloc;
-(void)load;
-(void)setNeedsApplySettings;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;
-(void)unload;


@end


#endif