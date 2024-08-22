// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKROUTEACTIVITYPROVIDER_H
#define MKROUTEACTIVITYPROVIDER_H



#import "MKPlaceActivityProvider.h"
#import "MKMapItem.h"

@interface MKRouteActivityProvider : MKPlaceActivityProvider

@property (retain, nonatomic) MKMapItem *destinationMapItem;
@property (retain, nonatomic) MKMapItem *sourceMapItem; // ivar: _sourceMapItem
@property (nonatomic) NSUInteger transportType; // ivar: _transportType


-(id)activitySourceTitle;
-(id)activityURL;
-(id)initWithSource:(id)arg0 destination:(id)arg1 ;


@end


#endif