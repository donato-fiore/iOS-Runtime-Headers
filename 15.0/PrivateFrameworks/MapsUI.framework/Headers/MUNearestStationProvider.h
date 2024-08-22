// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUNEARESTSTATIONPROVIDER_H
#define MUNEARESTSTATIONPROVIDER_H

@class MKMapItem, NSError;
@protocol MKLocationManagerOperation, MKMapServiceTicket;

#import <Foundation/Foundation.h>


@interface MUNearestStationProvider : NSObject {
    id<MKLocationManagerOperation> *_locationOperation;
    id<MKMapServiceTicket> *_nearestStationTicket;
}


@property (readonly, nonatomic) NSUInteger lastRequestedNearestID; // ivar: _lastRequestedNearestID
@property (readonly, nonatomic) MKMapItem *nearestStation; // ivar: _nearestStation
@property (readonly, nonatomic) NSError *nearestStationError; // ivar: _nearestStationError


-(void)cancel;
-(void)fetchStationForLineItemIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif