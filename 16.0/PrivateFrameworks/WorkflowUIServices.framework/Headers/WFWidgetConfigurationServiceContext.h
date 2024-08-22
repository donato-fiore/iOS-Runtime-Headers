// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWIDGETCONFIGURATIONSERVICECONTEXT_H
#define WFWIDGETCONFIGURATIONSERVICECONTEXT_H

@class NSExtensionContext;
@protocol WFWidgetConfigurationServiceVendorProtocol, WFWidgetConfigurationServiceContextDelegate;



@interface WFWidgetConfigurationServiceContext : NSExtensionContext <WFWidgetConfigurationServiceVendorProtocol>



@property (weak, nonatomic) NSObject<WFWidgetConfigurationServiceContextDelegate> *widgetConfigurationDelegate; // ivar: _widgetConfigurationDelegate


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)requestViewControllerDismissal;
-(void)setConfigurationCardViewFrame:(struct CGRect )arg0 ;


@end


#endif