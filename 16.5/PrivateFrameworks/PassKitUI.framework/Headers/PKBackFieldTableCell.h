// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBACKFIELDTABLECELL_H
#define PKBACKFIELDTABLECELL_H

@class UITextView, NSString, PKPassField;
@protocol UITextViewDelegate;


#import "PKTableViewCell.h"

@interface PKBackFieldTableCell : PKTableViewCell <UITextViewDelegate>

 {
    UITextView *_valueTextView;
    CGFloat _cachedWidth;
    CGFloat _computedHeight;
    BOOL _useBridgeStyle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPassField *field; // ivar: _field
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showLinks; // ivar: _showLinks
@property (readonly) Class superclass;
@property (nonatomic) BOOL useLargeTitleFont; // ivar: _useLargeTitleFont


+(id)reuseIdentifier;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_linkTextAttributes;
-(id)initWithField:(id)arg0 showLinks:(BOOL)arg1 ;
-(id)initWithField:(id)arg0 showLinks:(BOOL)arg1 useBridgeStyle:(BOOL)arg2 ;
-(struct CGRect )_textBounds;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_detectLinks;
-(void)_setupTextAttributes;
-(void)dealloc;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif