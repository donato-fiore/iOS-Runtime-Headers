// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEITEMHEADERVIEWMODEL_H
#define MUPLACEITEMHEADERVIEWMODEL_H

@class MKDistanceFormatter;
@protocol _MKPlaceItem;


#import "MUPlaceHeaderViewModel.h"

@interface MUPlaceItemHeaderViewModel : MUPlaceHeaderViewModel {
    id<_MKPlaceItem> *_placeItem;
    MKDistanceFormatter *_distanceFormatter;
}


@property (readonly, nonatomic) BOOL isUserSpecificPlaceItem;
@property (readonly, nonatomic) BOOL showNearbyStringForContactPlaceItem;


-(BOOL)hasEnclosingPlace;
-(BOOL)hasInitialData;
-(id)_formattedDistanceString;
-(id)_userSpecificPlaceSecondaryName;
-(id)enclosingPlaceAttributedStringWithFont:(id)arg0 labelColor:(id)arg1 tokenColor:(id)arg2 ;
-(id)initWithPlaceItem:(id)arg0 ;
-(id)placeSecondaryName;
-(id)transitLabelItems;


@end


#endif