// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTBUTTONNATIVEOBJECT_H
#define SUSCRIPTBUTTONNATIVEOBJECT_H

@class NSString, UIImage;


#import "SUScriptNativeObject.h"

@interface SUScriptButtonNativeObject : SUScriptNativeObject {
    NSString *_subtitle;
    NSString *_styleString;
}


@property (readonly, nonatomic, getter=isBackButton) BOOL backButton;
@property (readonly, nonatomic) int buttonType;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) UIEdgeInsets imageInsets;
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
@property (readonly, nonatomic) NSString *styleString;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *systemItemString; // ivar: _systemItemString
@property (nonatomic) NSInteger tag;
@property (retain, nonatomic) NSString *title;


+(id)objectWithDefaultButtonForScriptButton:(id)arg0 ;
-(id)initWithSystemItemString:(id)arg0 ;
-(void)buttonAction:(id)arg0 ;
-(void)configureFromScriptButtonNativeObject:(id)arg0 ;
-(void)connectButtonAction;
-(void)dealloc;
-(void)disconnectButtonAction;
-(void)hideConfirmationAnimated:(BOOL)arg0 ;
-(void)setStyleFromString:(id)arg0 ;
-(void)showConfirmationWithTitle:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif