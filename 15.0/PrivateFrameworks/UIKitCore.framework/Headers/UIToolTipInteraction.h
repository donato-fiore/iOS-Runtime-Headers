// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITOOLTIPINTERACTION_H
#define UITOOLTIPINTERACTION_H

@class NSString;
@protocol UIInteraction, UIToolTipInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIToolTipInteraction : NSObject <UIInteraction>

 {
    ? _delegateImplementsDeprecated;
    BOOL _delegateImplementsToolTipAtPoint;
    BOOL _isDefaultInteraction;
}


@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultToolTip; // ivar: _defaultToolTip
@property (weak, nonatomic) NSObject<UIToolTipInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


+(id)_defaultToolTipInteractionFromInteractions:(id)arg0 ;
+(id)_newDefaultToolTipInteraction;
-(id)_toolTipAtPoint:(struct CGPoint )arg0 boundingRect:(struct CGRect *)arg1 ;
-(id)init;
-(id)initWithDefaultToolTip:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif