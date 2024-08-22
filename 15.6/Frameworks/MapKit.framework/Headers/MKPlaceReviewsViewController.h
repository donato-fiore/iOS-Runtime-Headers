// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEREVIEWSVIEWCONTROLLER_H
#define MKPLACEREVIEWSVIEWCONTROLLER_H

@class NSMutableArray, NSString, NSArray;
@protocol _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceReviewAvatarGenerator.h"
#import "MKMapItem.h"

@interface MKPlaceReviewsViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>



@property (retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator; // ivar: _avatarGenerator
@property (retain, nonatomic) NSMutableArray *cells; // ivar: _cells
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (weak, nonatomic) NSObject<MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> *reviewsControllerDelegate; // ivar: _reviewsControllerDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *userSnippets; // ivar: _userSnippets


-(BOOL)_canShowWhileLocked;
-(NSUInteger)reviewsCount;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)reviewAtIndex:(NSUInteger)arg0 ;
-(void)_showReview:(id)arg0 index:(NSUInteger)arg1 ;
-(void)_updateAttribution;
-(void)_viewAllReviews;
-(void)loadCells;
-(void)sectionView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif