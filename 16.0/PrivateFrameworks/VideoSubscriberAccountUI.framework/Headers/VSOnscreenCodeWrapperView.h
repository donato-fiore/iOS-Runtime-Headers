// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSONSCREENCODEWRAPPERVIEW_H
#define VSONSCREENCODEWRAPPERVIEW_H

@class UIView;


#import "VSFontCenter.h"

@interface VSOnscreenCodeWrapperView : UIView

@property (retain, nonatomic) VSFontCenter *fontCenter; // ivar: _fontCenter


-(id)createDescriptionLabel;
-(id)createDetailsLabelWithTextColor:(id)arg0 withBoldWeight:(BOOL)arg1 ;
-(id)createTitleLabel;
-(id)init;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUIWithViewModel:(id)arg0 ;


@end


#endif