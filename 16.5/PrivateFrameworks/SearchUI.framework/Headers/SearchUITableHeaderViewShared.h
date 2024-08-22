// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUITABLEHEADERVIEWSHARED_H
#define SEARCHUITABLEHEADERVIEWSHARED_H

@class TLKStackView, SFCollectionCardSection, TLKTextButton, SFResultSection;
@protocol SearchUITableHeaderCommandDelegate, SFFeedbackListener, SearchUITableHeaderViewDelegate;



@interface SearchUITableHeaderViewShared : TLKStackView

@property (retain, nonatomic) SFCollectionCardSection *cardSection; // ivar: _cardSection
@property (weak, nonatomic) NSObject<SearchUITableHeaderCommandDelegate> *commandDelegate; // ivar: _commandDelegate
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener; // ivar: _feedbackListener
@property (retain, nonatomic) TLKTextButton *headerOptionButton; // ivar: _headerOptionButton
@property (nonatomic) NSUInteger headerType; // ivar: _headerType
@property (weak, nonatomic) NSObject<SearchUITableHeaderViewDelegate> *headerViewDelegate; // ivar: _headerViewDelegate
@property BOOL isExpanded; // ivar: _isExpanded
@property (retain, nonatomic) SFResultSection *section; // ivar: _section


-(BOOL)isSuggestedAppsHeader;
-(BOOL)supportsShowMoreInApp;
-(id)attributedStringWithSymbolImageName:(id)arg0 text:(id)arg1 ;
-(id)moreResultsPunchout;
-(void)moreButtonPressed;
-(void)updateButtonWithAttributedText:(id)arg0 image:(id)arg1 ;
-(void)updateHeaderButtonVisibilityAnimated:(BOOL)arg0 ;
-(void)updateWithCollectionCardSection:(id)arg0 section:(id)arg1 isExpanded:(BOOL)arg2 ;


@end


#endif