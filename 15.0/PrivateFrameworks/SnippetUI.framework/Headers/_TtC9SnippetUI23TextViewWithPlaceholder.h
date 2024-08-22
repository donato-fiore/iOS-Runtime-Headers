// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SNIPPETUI23TEXTVIEWWITHPLACEHOLDER_H
#define _TTC9SNIPPETUI23TEXTVIEWWITHPLACEHOLDER_H

@class UITextView, NSString;



@interface _TtC9SnippetUI23TextViewWithPlaceholder : UITextView {
    ? placeholder;
    ? placeholderColor;
}


@property (nonatomic, copy) NSString *text;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif