// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKACTIVITYINDICATORVIEW_H
#define TLKACTIVITYINDICATORVIEW_H

@class UIActivityIndicatorView;


#import "TLKView.h"
#import "TLKMultilineText.h"
#import "TLKLabel.h"

@interface TLKActivityIndicatorView : TLKView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) TLKMultilineText *subtitle; // ivar: _subtitle
@property (retain, nonatomic) TLKLabel *subtitleLabel; // ivar: _subtitleLabel


-(BOOL)usesDefaultLayoutMargins;
-(id)setupContentView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)observedPropertiesChanged;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif