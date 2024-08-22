// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPOPOVEROBSERVER_H
#define SKUIPOPOVEROBSERVER_H

@class UIPopoverController, NSString;
@protocol UIPopoverControllerDelegate;

#import <Foundation/Foundation.h>


@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate>

 {
    UIPopoverController *_popoverController;
    SEL _selector;
    id *_target;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPopoverController:(id)arg0 ;
-(void)dealloc;
-(void)dismissPopoverAnimated:(BOOL)arg0 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)setTarget:(id)arg0 selector:(SEL)arg1 ;


@end


#endif