// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCALENDARSCRUBBERVIEWCONTROLLER_H
#define HUCALENDARSCRUBBERVIEWCONTROLLER_H

@class UICollectionViewController, NSString;
@protocol HUCalendarScrubberDataSourceChangeObserver, HUCalendarScrubberViewDelegate;


#import "HUCalendarScrubberDataSource.h"

@interface HUCalendarScrubberViewController : UICollectionViewController <HUCalendarScrubberDataSourceChangeObserver>



@property (nonatomic) NSInteger currentSection; // ivar: _currentSection
@property (retain, nonatomic) HUCalendarScrubberDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastBoundsWidth; // ivar: _lastBoundsWidth
@property (readonly, nonatomic) NSUInteger nextSection;
@property (readonly, nonatomic) NSUInteger previousSection;
@property (copy, nonatomic) id *scrollCompletionBlock; // ivar: _scrollCompletionBlock
@property (weak, nonatomic) NSObject<HUCalendarScrubberViewDelegate> *scrubberDelegate; // ivar: _scrubberDelegate
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)jumpToSection:(NSUInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrubberDataSourceDidReload:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif