// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIATTRIBUTIONFOOTERCARDSECTIONVIEW_H
#define SEARCHUIATTRIBUTIONFOOTERCARDSECTIONVIEW_H

@class SFAttributionFooterCardSection, TLKTextButton, TLKStackView;


#import "SearchUICardSectionView.h"

@interface SearchUIAttributionFooterCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SFAttributionFooterCardSection *cardSection; // ivar: _cardSection
@property (retain, nonatomic) TLKTextButton *leadingTextButton; // ivar: _leadingTextButton
@property (retain, nonatomic) TLKStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) TLKTextButton *trailingTextButton; // ivar: _trailingTextButton


+(BOOL)prefersNoSeparatorAboveCardSection:(id)arg0 ;
+(BOOL)supportsCustomUserReportRequestAfforance;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(void)removeIconsFromRichText:(id)arg0 ;
-(id)setupContentView;
-(id)setupTextButtonThatIsLeadingAttribution:(BOOL)arg0 ;
-(void)didPressLeadingTextButton;
-(void)didPressTrailingTextButton;
-(void)setUserInteractionEnabled:(BOOL)arg0 forButton:(id)arg1 ;
-(void)updateAttributionThatIsLeading:(BOOL)arg0 withSection:(id)arg1 isRTL:(BOOL)arg2 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif