// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITOOLBARCONTROLLER_H
#define SKUITOOLBARCONTROLLER_H

@class NSArray;
@protocol SKUIToolbarControllerDelegate;

#import <Foundation/Foundation.h>

#import "SKUIToolbarButtonsController.h"
#import "SKUIToolbarViewElement.h"

@interface SKUIToolbarController : NSObject {
    SKUIToolbarButtonsController *_buttonsController;
}


@property (weak, nonatomic) NSObject<SKUIToolbarControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *toolbarItems; // ivar: _toolbarItems
@property (readonly, nonatomic) SKUIToolbarViewElement *toolbarViewElement; // ivar: _viewElement


-(BOOL)toolbarButtonsController:(id)arg0 shouldDispatchEventForButton:(id)arg1 ;
-(id)_barButtonItemWithButtonElement:(id)arg0 ;
-(id)_barButtonItemWithElement:(id)arg0 ;
-(id)initWithToolbarViewElement:(id)arg0 ;
-(void)dealloc;
-(void)detachFromNavigationController:(id)arg0 ;
-(void)updateToolbarForNavigationController:(id)arg0 ;


@end


#endif