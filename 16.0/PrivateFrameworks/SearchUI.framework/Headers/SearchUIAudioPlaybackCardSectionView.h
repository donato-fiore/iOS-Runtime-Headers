// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIAUDIOPLAYBACKCARDSECTIONVIEW_H
#define SEARCHUIAUDIOPLAYBACKCARDSECTIONVIEW_H

@class TLKStackView, NSString;
@protocol NUIContainerViewDelegate, SearchUICardSectionViewUpdatable;


#import "SearchUICardSectionView.h"
#import "SearchUILabel.h"
#import "SearchUIButton.h"
#import "SearchUISelectableTextView.h"

@interface SearchUIAudioPlaybackCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, SearchUICardSectionViewUpdatable>



@property (retain, nonatomic) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SearchUILabel *detailTextLabel; // ivar: _detailTextLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SearchUIButton *playButton; // ivar: _playButton
@property (retain, nonatomic) SearchUISelectableTextView *subtitleView; // ivar: _subtitleView
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUISelectableTextView *titleTextView; // ivar: _titleTextView


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;
-(void)_playButtonPressed:(id)arg0 ;
-(void)_updateStateFromCardSection:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateStateFromCardSection:(id)arg0 ;


@end


#endif