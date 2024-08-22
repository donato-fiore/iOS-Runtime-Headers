// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSWITCHPARAMETERCOMPONENT_H
#define WFSWITCHPARAMETERCOMPONENT_H

@class WFParameter, NSNumber;


#import "WFParameterComponent.h"
#import "WFVariableChooserParameterLayoutComponent.h"
#import "CKComponent.h"

@interface WFSwitchParameterComponent : WFParameterComponent {
    WFParameter *_parameter;
    id *_updateBlock;
}


@property (readonly, nonatomic) WFVariableChooserParameterLayoutComponent *layoutComponent; // ivar: _layoutComponent
@property (readonly, nonatomic) CKComponent *switchComponent; // ivar: _switchComponent
@property (readonly, nonatomic) NSNumber *value; // ivar: _value


// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 labelsToAlignTo:(id)arg7  ;
-(id)parameter;
-(id)updateBlock:(SEL)arg0 ;
-(void)presentTokenChooser:(id)arg0 ;
-(void)switchValueChanged:(id)arg0 ;


@end


#endif