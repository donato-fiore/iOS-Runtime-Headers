// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUITABLEHEADERVIEW_H
#define SEARCHUITABLEHEADERVIEW_H

@class TLKStackView, SFCollectionCardSection, NSString, TLKTextButton, SFResultSection;
@protocol NUIContainerViewDelegate, SearchUITableHeaderCommandDelegate, SFFeedbackListener, SearchUITableHeaderViewDelegate;


#import "SearchUILabel.h"

@interface SearchUITableHeaderView : TLKStackView <NUIContainerViewDelegate>



@property (retain, nonatomic) SFCollectionCardSection *cardSection; // ivar: _cardSection
@property (weak, nonatomic) NSObject<SearchUITableHeaderCommandDelegate> *commandDelegate; // ivar: _commandDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener; // ivar: _feedbackListener
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKTextButton *headerOptionButton; // ivar: _headerOptionButton
@property (nonatomic) NSUInteger headerType; // ivar: _headerType
@property (weak, nonatomic) NSObject<SearchUITableHeaderViewDelegate> *headerViewDelegate; // ivar: _headerViewDelegate
@property (nonatomic) BOOL isExpanded; // ivar: _isExpanded
@property (retain, nonatomic) SFResultSection *section; // ivar: _section
@property (nonatomic) BOOL shouldUseInsetRoundedSections; // ivar: _shouldUseInsetRoundedSections
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (retain, nonatomic) SearchUILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(BOOL)isSuggestedAppsHeader;
-(BOOL)supportsShowMoreInApp;
-(id)attributedStringWithSymbolImageName:(id)arg0 text:(id)arg1 ;
-(id)init;
-(id)moreResultsPunchout;
-(void)layoutSubviews;
-(void)moreButtonPressed;
-(void)updateButtonWithAttributedText:(id)arg0 image:(id)arg1 ;
-(void)updateHeaderButtonVisibilityAnimated:(BOOL)arg0 ;
-(void)updateWithCollectionCardSection:(id)arg0 section:(id)arg1 usesInsetRoundedSection:(BOOL)arg2 ;
-(void)updateWithSection:(id)arg0 isExpanded:(BOOL)arg1 usesInsetRoundedSection:(BOOL)arg2 ;


@end


#endif