// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUROUTEACTIVITYPROVIDER_H
#define MUROUTEACTIVITYPROVIDER_H

@class MKMapItem;


#import "MUPlaceActivityProvider.h"

@interface MURouteActivityProvider : MUPlaceActivityProvider

@property (retain, nonatomic) MKMapItem *destinationMapItem;
@property (retain, nonatomic) MKMapItem *sourceMapItem; // ivar: _sourceMapItem
@property (nonatomic) NSUInteger transportType; // ivar: _transportType


-(id)activitySourceTitle;
-(id)activityURL;
-(id)initWithSource:(id)arg0 destination:(id)arg1 ;


@end


#endif