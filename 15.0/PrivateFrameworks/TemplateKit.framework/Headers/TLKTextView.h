// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKTEXTVIEW_H
#define TLKTEXTVIEW_H

@class UITextView;


#import "TLKMultilineText.h"

@interface TLKTextView : UITextView

@property (nonatomic) BOOL automaticUrlification; // ivar: _automaticUrlification
@property (retain, nonatomic) TLKMultilineText *multilineText; // ivar: _multilineText
@property (nonatomic) NSUInteger prominence; // ivar: _prominence


-(BOOL)_usesNonVibrantAppearance;
-(CGFloat)effectiveBaselineOffsetFromBottom;
-(CGFloat)effectiveFirstBaselineOffsetFromTop;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)setText:(id)arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateAttributedString;
-(void)urlify;


@end


#endif