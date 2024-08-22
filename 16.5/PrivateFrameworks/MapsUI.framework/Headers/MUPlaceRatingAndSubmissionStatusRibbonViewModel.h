// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACERATINGANDSUBMISSIONSTATUSRIBBONVIEWMODEL_H
#define MUPLACERATINGANDSUBMISSIONSTATUSRIBBONVIEWMODEL_H

@class MKMapItem, MKUGCCallToActionViewAppearance;


#import "MUPlaceRibbonItemViewModel.h"

@interface MUPlaceRatingAndSubmissionStatusRibbonViewModel : MUPlaceRibbonItemViewModel

@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus; // ivar: _submissionStatus


-(BOOL)_canBeRated;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTappable;
-(NSInteger)_ratingState;
-(id)initWithMapItem:(id)arg0 submissionStatus:(id)arg1 ;
-(id)typeStringForAX;
-(void)_updateStringProviders;


@end


#endif