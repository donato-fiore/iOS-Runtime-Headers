// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUMEDIASUGGESTIONSVIEWCONTROLLER_H
#define MRUMEDIASUGGESTIONSVIEWCONTROLLER_H

@class UIViewController, UICollectionViewDiffableDataSource, NSString, NSDictionary;
@protocol UICollectionViewDelegate, MRUMediaSuggestionsControllerObserver, MRUMediaSuggestionsViewControllerDelegate;


#import "MRUMediaSuggestion.h"
#import "MRUVisualStylingProvider.h"
#import "MRUMediaSuggestionsController.h"
#import "MRUMediaSuggestionsView.h"

@interface MRUMediaSuggestionsViewController : UIViewController <UICollectionViewDelegate, MRUMediaSuggestionsControllerObserver>



@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUMediaSuggestionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (retain, nonatomic) MRUMediaSuggestion *nowPlayingMediaSuggestion; // ivar: _nowPlayingMediaSuggestion
@property (retain, nonatomic) NSString *selectedIndentifier; // ivar: _selectedIndentifier
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) NSString *suggestionContext; // ivar: _suggestionContext
@property (retain, nonatomic) NSDictionary *suggestions; // ivar: _suggestions
@property (readonly, nonatomic) MRUMediaSuggestionsController *suggestionsController; // ivar: _suggestionsController
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsHorizontalLayout; // ivar: _supportsHorizontalLayout
@property (retain, nonatomic) MRUMediaSuggestionsView *view;
@property (retain, nonatomic) MRUMediaSuggestionsView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)init;
-(id)initWithSuggestionsController:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)mediaSuggestionsController:(id)arg0 didUpdateSuggestions:(id)arg1 ;
-(void)updateCell:(id)arg0 forIdentifier:(id)arg1 ;
-(void)updateSuggestions;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif