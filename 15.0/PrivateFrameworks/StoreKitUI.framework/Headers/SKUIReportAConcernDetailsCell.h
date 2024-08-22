// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREPORTACONCERNDETAILSCELL_H
#define SKUIREPORTACONCERNDETAILSCELL_H

@class UITableViewCell, NSString, UITextView;
@protocol UITextViewDelegate;



@interface SKUIReportAConcernDetailsCell : UITableViewCell <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *placeholderText; // ivar: _placeholderText
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text;
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)updatePlaceholderText:(BOOL)arg0 ;


@end


#endif