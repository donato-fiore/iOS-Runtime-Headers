// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRXTEXTVIEW_H
#define PRXTEXTVIEW_H

@class UITextView, NSAttributedString, NSString;
@protocol PRXTextContainer;



@interface PRXTextView : UITextView <PRXTextContainer>



@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)textViewWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)setTitleText:(id)arg0 ;


@end


#endif