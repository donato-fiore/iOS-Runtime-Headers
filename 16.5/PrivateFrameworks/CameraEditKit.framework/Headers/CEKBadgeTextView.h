// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEKBADGETEXTVIEW_H
#define CEKBADGETEXTVIEW_H

@class NSString, NSDictionary;


#import "CEKBadgeView.h"

@interface CEKBadgeTextView : CEKBadgeView

@property (copy, nonatomic, setter=_setText:) NSString *_text; // ivar: __text
@property (retain, nonatomic, setter=_setTextAttributes:) NSDictionary *_textAttributes; // ivar: __textAttributes
@property (nonatomic, setter=_setTextInsets:) UIEdgeInsets _textInsets; // ivar: __textInsets
@property (copy, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (nonatomic) NSUInteger fontStyle; // ivar: _fontStyle


+(CGFloat)_heightForContentSize:(id)arg0 textInsets:(struct UIEdgeInsets )arg1 ;
+(CGFloat)_textHeightForContentSize:(id)arg0 ;
+(id)_fontForContentSize:(id)arg0 fontStyle:(NSUInteger)arg1 ;
+(id)_textAttributesForContentSize:(id)arg0 fontStyle:(NSUInteger)arg1 ;
+(struct UIEdgeInsets )_defaultTextInsets;
-(id)_maskImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif