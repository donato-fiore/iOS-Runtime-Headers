// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHAREPREVIEWADDITIONALSECURITYSECTIONCONTROLLER_H
#define PKSHAREPREVIEWADDITIONALSECURITYSECTIONCONTROLLER_H

@class PKPassShareActivationOptions, NSString;
@protocol PKSharePreviewAdditionalSecuritySectionControllerDelegate;


#import "PKPassShareSectionController.h"
#import "PKPassShareInitiationContext.h"

@interface PKSharePreviewAdditionalSecuritySectionController : PKPassShareSectionController {
    NSUInteger _mode;
    PKPassShareActivationOptions *_activationOptions;
    PKPassShareInitiationContext *_context;
    id<PKSharePreviewAdditionalSecuritySectionControllerDelegate> *_delegate;
    NSString *_footerText;
}




-(id)_initWithMode:(NSUInteger)arg0 activationOptions:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(id)decorateListCell:(id)arg0 forRowItem:(id)arg1 ;
-(id)footerAttributedStringForIdentifier:(id)arg0 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithInitiationContext:(id)arg0 delegate:(id)arg1 ;
-(id)initWithMode:(NSUInteger)arg0 activationOptions:(id)arg1 delegate:(id)arg2 ;
-(void)_activationCodeSwitchValueChanged:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)reloadItemsAnimated:(BOOL)arg0 ;
-(void)setContext:(id)arg0 ;


@end


#endif