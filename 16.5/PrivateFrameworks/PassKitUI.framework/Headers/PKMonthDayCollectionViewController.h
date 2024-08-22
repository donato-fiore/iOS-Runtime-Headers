// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMONTHDAYCOLLECTIONVIEWCONTROLLER_H
#define PKMONTHDAYCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSNumberFormatter, NSCalendar, NSString, NSTimeZone;
@protocol UICollectionViewDelegateFlowLayout, PKMonthDayCollectionViewControllerDelegate;



@interface PKMonthDayCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>

 {
    NSNumberFormatter *_dayFormatter;
    NSCalendar *_calendar;
}


@property (weak, nonatomic) NSObject<PKMonthDayCollectionViewControllerDelegate> *dayDelegate; // ivar: _dayDelegate
@property (nonatomic) NSInteger dayNumber; // ivar: _dayNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maximumDayNumber; // ivar: _maximumDayNumber
@property (nonatomic) NSInteger minimumDayNumber; // ivar: _minimumDayNumber
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_indexPathForDayNumber:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDayDelegate:(id)arg0 timeZone:(id)arg1 ;
-(id)selectedDate;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif