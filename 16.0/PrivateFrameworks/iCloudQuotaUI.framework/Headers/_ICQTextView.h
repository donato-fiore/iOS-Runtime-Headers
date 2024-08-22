// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICQTEXTVIEW_H
#define _ICQTEXTVIEW_H

@class UITextView, NSDictionary, NSString, NSArray;



@interface _ICQTextView : UITextView

@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *format; // ivar: _format
@property (retain, nonatomic) NSArray *links; // ivar: _links


-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setAttributedText;


@end


#endif