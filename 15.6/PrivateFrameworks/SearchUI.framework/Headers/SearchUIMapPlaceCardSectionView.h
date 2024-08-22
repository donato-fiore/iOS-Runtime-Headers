// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMAPPLACECARDSECTIONVIEW_H
#define SEARCHUIMAPPLACECARDSECTIONVIEW_H

@class NSString;
@protocol NUIContainerViewDelegate, MUPlaceViewControllerDelegate;


#import "SearchUICardSectionView.h"
#import "SearchUIMapsViewController.h"

@interface SearchUIMapPlaceCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, MUPlaceViewControllerDelegate>



@property BOOL alreadyDispatchedOnMainQueue; // ivar: _alreadyDispatchedOnMainQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) SearchUIMapsViewController *mapViewController; // ivar: _mapViewController
@property (readonly) Class superclass;


-(BOOL)isReportAProblemAvailable;
-(id)embeddedViewController;
-(id)setupContentView;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)placeViewController:(id)arg0 requestPasscodeUnlockWithCompletion:(id)arg1 ;
-(void)placeViewControllerDidUpdateHeight:(id)arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateTintColorProvider;


@end


#endif