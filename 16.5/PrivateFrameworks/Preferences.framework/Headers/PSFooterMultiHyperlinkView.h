// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSFOOTERMULTIHYPERLINKVIEW_H
#define PSFOOTERMULTIHYPERLINKVIEW_H

@class UITableViewHeaderFooterView, NSMutableDictionary, NSURL, NSString, NSArray, UITextView;
@protocol PSHeaderFooterView, UITextViewDelegate;



@interface PSFooterMultiHyperlinkView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate>

 {
    NSMutableDictionary *_rangeLinkSpecMap;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) SEL action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) _NSRange linkRange; // ivar: _linkRange
@property (retain, nonatomic) NSArray *linkSpecs; // ivar: _linkSpecs
@property (readonly) Class superclass;
@property (weak, nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)isValidLinkRange:(struct _NSRange )arg0 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)_accessibilitySetInterfaceStyleIntent:(NSUInteger)arg0 ;
-(void)_addLinkSpec:(id)arg0 toAttrStr:(id)arg1 ;
-(void)_linkify;
-(void)refreshContentsWithSpecifier:(id)arg0 ;
-(void)setupSubviewsAndContstraints;


@end


#endif