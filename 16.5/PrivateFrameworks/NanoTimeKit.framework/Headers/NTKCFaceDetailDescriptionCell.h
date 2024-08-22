// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILDESCRIPTIONCELL_H
#define NTKCFACEDETAILDESCRIPTIONCELL_H

@class NSAttributedString, NSString, UITextView;
@protocol UITextViewDelegate;


#import "NTKCDetailTableViewCell.h"

@interface NTKCFaceDetailDescriptionCell : NTKCDetailTableViewCell <UITextViewDelegate>



@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


+(id)reuseIdentifier;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)rowHeight;
-(id)_fontDescriptor;
-(id)init;
-(void)_fontSizeDidChange;
-(void)layoutSubviews;


@end


#endif