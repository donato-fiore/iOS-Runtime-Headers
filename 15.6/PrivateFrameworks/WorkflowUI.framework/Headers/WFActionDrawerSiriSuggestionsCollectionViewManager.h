// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONDRAWERSIRISUGGESTIONSCOLLECTIONVIEWMANAGER_H
#define WFACTIONDRAWERSIRISUGGESTIONSCOLLECTIONVIEWMANAGER_H

@class NSArray, UICollectionView, UIViewController, NSString, WFAction, INIntent;
@protocol UICollectionViewDelegateFlowLayout, MPMediaPickerControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate;

#import <Foundation/Foundation.h>


@interface WFActionDrawerSiriSuggestionsCollectionViewManager : NSObject <UICollectionViewDelegateFlowLayout, MPMediaPickerControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate>



@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) NSInteger cellType; // ivar: _cellType
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) BOOL configuredForDailyRoutines; // ivar: _configuredForDailyRoutines
@property (weak, nonatomic) UIViewController *containingViewController; // ivar: _containingViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *donations; // ivar: _donations
@property (retain, nonatomic) WFAction *genericAction; // ivar: _genericAction
@property (copy, nonatomic) NSString *genericActionParameterTitle; // ivar: _genericActionParameterTitle
@property (retain, nonatomic) INIntent *genericIntent; // ivar: _genericIntent
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 cellType:(NSInteger)arg1 donations:(id)arg2 actions:(id)arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 withDonation:(id)arg1 cellType:(NSInteger)arg2 ;
-(void)_configureCell:(id)arg0 withGenericIntent:(id)arg1 cellType:(NSInteger)arg2 genericParameterTitle:(id)arg3 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)mediaPicker:(id)arg0 didPickMediaItems:(id)arg1 ;
-(void)showMusicPicker;
-(void)showPodcastPicker;


@end


#endif