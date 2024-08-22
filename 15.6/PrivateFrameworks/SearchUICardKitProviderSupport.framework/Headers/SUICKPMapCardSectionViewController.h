// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICKPMAPCARDSECTIONVIEWCONTROLLER_H
#define SUICKPMAPCARDSECTIONVIEWCONTROLLER_H

@class UIView<CRKCardSectionView>, NSString, CRKContainerCardSectionView;
@protocol SearchUIFeedbackDelegate;


#import "SUICKPInteractiveCardSectionViewController.h"

@interface SUICKPMapCardSectionViewController : SUICKPInteractiveCardSectionViewController <SearchUIFeedbackDelegate>

 {
    BOOL _needsToLoadCardSectionView;
    BOOL _inTrackingRunLoopMode;
    UIView<CRKCardSectionView> *_mapSectionView;
    *__CFRunLoopObserver _mainRunLoopObserverRef;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CRKContainerCardSectionView *view;


+(id)cardSectionClasses;
-(BOOL)_shouldAttemptToSnapshotMapView;
-(id)_initWithCardSection:(id)arg0 ;
-(id)_mapCardSection;
-(void)_loadCardSectionView;
-(void)_loadCardSectionViewIfNeeded;
-(void)_loadMapCardSectionView;
-(void)_snapshotCardSectionView;
-(void)_updateContentSize;
-(void)dealloc;
-(void)didEngageCardSection:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif