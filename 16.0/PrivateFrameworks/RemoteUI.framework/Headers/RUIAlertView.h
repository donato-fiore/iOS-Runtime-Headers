// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUIALERTVIEW_H
#define RUIALERTVIEW_H

@class UIAlertController, NSString, RUIObjectModel<RUIAlertViewDelegate>, UIColor;
@protocol RUIPresentationHandling;


#import "RUIElement.h"

@interface RUIAlertView : RUIElement {
    UIAlertController *_alertController;
    id<RUIPresentationHandling> *_presentationContext;
}


@property (readonly, nonatomic) NSInteger buttonIndex; // ivar: _buttonIndex
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (weak, nonatomic) RUIObjectModel<RUIAlertViewDelegate> *objectModel; // ivar: _objectModel
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) NSString *title; // ivar: _title


+(void)_enableTestMode;
-(id)alertController;
-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(void)_dismissAlertController;
-(void)addButtonWithTitle:(id)arg0 URL:(id)arg1 style:(NSInteger)arg2 attributes:(id)arg3 ;
-(void)dealloc;
-(void)runAlertInController:(id)arg0 completion:(id)arg1 ;


@end


#endif