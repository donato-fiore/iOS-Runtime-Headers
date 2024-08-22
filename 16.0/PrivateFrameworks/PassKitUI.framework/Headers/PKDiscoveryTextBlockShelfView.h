// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYTEXTBLOCKSHELFVIEW_H
#define PKDISCOVERYTEXTBLOCKSHELFVIEW_H

@class UITextView, PKDiscoveryTextBlockShelf, NSAttributedString, NSString;
@protocol UITextViewDelegate;


#import "PKDiscoveryShelfView.h"

@interface PKDiscoveryTextBlockShelfView : PKDiscoveryShelfView <UITextViewDelegate>

 {
    UITextView *_textView;
    PKDiscoveryTextBlockShelf *_shelf;
    NSAttributedString *_attributedText;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_attributedStringForBody:(id)arg0 lede:(id)arg1 headerline:(id)arg2 ;
-(id)_textColorForBody;
-(id)_textColorForHeaderline;
-(id)_textColorForLede;
-(id)_uiFontTextStyle;
-(id)initWithShelf:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif