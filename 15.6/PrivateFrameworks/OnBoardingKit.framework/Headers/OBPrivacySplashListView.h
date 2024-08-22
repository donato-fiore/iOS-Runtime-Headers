// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBPRIVACYSPLASHLISTVIEW_H
#define OBPRIVACYSPLASHLISTVIEW_H

@class UIStackView, UITextView, NSMutableArray;



@interface OBPrivacySplashListView : UIStackView

@property BOOL displayingPrivacyPane; // ivar: _displayingPrivacyPane
@property (readonly, nonatomic) UITextView *footerTextView; // ivar: _footerTextView
@property (retain, nonatomic) NSMutableArray *stackedIconTextLists; // ivar: _stackedIconTextLists
@property (retain, nonatomic) NSMutableArray *textViews; // ivar: _textViews
@property (nonatomic) BOOL underlineLinks; // ivar: _underlineLinks


-(id)initWithContentList:(id)arg0 dataDetectorTypes:(NSUInteger)arg1 ;
-(id)initWithContentList:(id)arg0 dataDetectorTypes:(NSUInteger)arg1 displayingPrivacyPane:(BOOL)arg2 ;
-(void)_updateTextViewsForLinkUITreatment:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFonts;
-(void)updateSpacing;
-(void)updateTextAlignment;


@end


#endif