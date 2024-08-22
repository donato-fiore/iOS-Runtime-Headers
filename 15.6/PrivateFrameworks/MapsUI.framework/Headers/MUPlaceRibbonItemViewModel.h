// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPLACERIBBONITEMVIEWMODEL_H
#define MUPLACERIBBONITEMVIEWMODEL_H

@protocol MUPlaceRibbonItemViewModelUpdateDelegate;

#import <Foundation/Foundation.h>


@interface MUPlaceRibbonItemViewModel : NSObject

@property (nonatomic, getter=isTappable) BOOL tappable; // ivar: _tappable
@property (copy, nonatomic) id *titleStringProvider; // ivar: _titleStringProvider
@property (weak, nonatomic) NSObject<MUPlaceRibbonItemViewModelUpdateDelegate> *updateDelegate; // ivar: _updateDelegate
@property (copy, nonatomic) id *valueStringProvider; // ivar: _valueStringProvider


+(id)amenityItemViewForMapItem:(id)arg0 amenityItemConfiguration:(id)arg1 ;
+(id)costItemViewForMapItem:(id)arg0 ;
+(id)distanceFromCurrentLocationItemViewModelForDistanceString:(id)arg0 ;
+(id)distanceFromCurrentLocationItemViewModelForMapItem:(id)arg0 currentLocationCoordinate:(struct CLLocationCoordinate2D )arg1 ;
+(id)factoidItemForFactoid:(id)arg0 ;
+(id)guidesItemViewModelForMapItem:(id)arg0 ;
+(id)hoursItemViewModelForMapItem:(id)arg0 ;
+(id)ratingItemViewModelForMapItem:(id)arg0 ;
+(id)ratingSubmissionStatusViewModelForRatingState:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif