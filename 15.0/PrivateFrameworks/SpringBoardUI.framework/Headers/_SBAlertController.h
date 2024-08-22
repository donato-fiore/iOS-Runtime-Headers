// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBALERTCONTROLLER_H
#define _SBALERTCONTROLLER_H

@class UIAlertController, NSString;
@protocol BSDescriptionProviding, UIAlertControllerVisualStyleProviding, _SBAlertControllerDelegate;


#import "SBAlertItem.h"

@interface _SBAlertController : UIAlertController <BSDescriptionProviding>

 {
    id<UIAlertControllerVisualStyleProviding> *_styleProvider;
}


@property (weak, nonatomic) NSObject<_SBAlertControllerDelegate> *alertControllerDelegate; // ivar: _alertControllerDelegate
@property (weak, nonatomic) SBAlertItem *alertItem; // ivar: _alertItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)_styleProvider;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithStyleProvider:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)setHiddenOnClonedDisplay:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif