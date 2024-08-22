// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKREVERSEGEOCODERINTERNAL_H
#define MKREVERSEGEOCODERINTERNAL_H

@protocol MKReverseGeocoderDelegate, MKMapServiceTicket;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKReverseGeocoderInternal : NSObject {
    CLLocationCoordinate2D coordinate;
    id<MKReverseGeocoderDelegate> *delegate;
    MKMapItem *mapItem;
    id<MKMapServiceTicket> *ticket;
    BOOL querying;
}






@end


#endif