// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPAPERSTYLESHEETCOLLECTIONVIEWCONTROLLER_H
#define ICPAPERSTYLESHEETCOLLECTIONVIEWCONTROLLER_H

@protocol ICPaperStyleSheetCollectionViewControllerDelegate;


#import "ICPaperStyleCollectionViewController.h"

@interface ICPaperStyleSheetCollectionViewController : ICPaperStyleCollectionViewController

@property (nonatomic) NSUInteger initialPaperStyleType; // ivar: _initialPaperStyleType
@property (weak, nonatomic) NSObject<ICPaperStyleSheetCollectionViewControllerDelegate> *paperStyleDelegate; // ivar: _paperStyleDelegate


-(BOOL)_canShowWhileLocked;
-(BOOL)accessibilityPerformEscape;
-(id)indexPathForInitialSelection;
-(id)initWithInitialPaperStyleType:(NSUInteger)arg0 delegate:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)cancelAction:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif