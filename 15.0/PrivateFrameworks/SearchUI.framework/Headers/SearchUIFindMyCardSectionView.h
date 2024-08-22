// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIFINDMYCARDSECTIONVIEW_H
#define SEARCHUIFINDMYCARDSECTIONVIEW_H

@class CNContact, NSString, TLKLabel, FMFMapViewController;
@protocol FMFMapViewControllerDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIFindMyCardSectionView : SearchUICardSectionView <FMFMapViewControllerDelegate>



@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKLabel *locationLabel; // ivar: _locationLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKLabel *timeLabel; // ivar: _timeLabel
@property (retain, nonatomic) FMFMapViewController *viewController; // ivar: _viewController


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)annotationContactForHandle:(id)arg0 ;
-(id)embeddedViewController;
-(id)setupContentView;
-(void)fmfMapViewController:(id)arg0 didReceiveLocation:(id)arg1 ;
-(void)updateAppearance;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif