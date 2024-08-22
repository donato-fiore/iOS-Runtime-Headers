// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOCALSEARCH_H
#define MKLOCALSEARCH_H

@protocol MKMapServiceTicket, MKMapServiceSpatialPlaceLookupTicket;

#import <Foundation/Foundation.h>

#import "MKLocalSearchRequest.h"
#import "MKLocalPointsOfInterestRequest.h"

@interface MKLocalSearch : NSObject {
    MKLocalSearchRequest *_request;
    id<MKMapServiceTicket> *_ticket;
    MKLocalPointsOfInterestRequest *_pointsOfInterestRequest;
    id<MKMapServiceSpatialPlaceLookupTicket> *_spatialPlaceLookupTicket;
    os_unfair_lock_s _stateLock;
    BOOL _searching;
    BOOL _cancelled;
}


@property (readonly, nonatomic, getter=isSearching) BOOL searching;


-(id)_ticketForSearchRequest:(id)arg0 ;
-(id)init;
-(id)initWithPointsOfInterestRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)_handleMapItems:(id)arg0 boundingRegion:(id)arg1 error:(id)arg2 withCompletionHandler:(id)arg3 ;
// -(void)_phoneOnlyStartWithCompletionHandler:(id)arg0 queue:(unk)arg1  ;
// -(void)_startPointsOfInterestFetchWithCompletionHandler:(id)arg0 queue:(unk)arg1  ;
// -(void)_startWithCompletionHandler:(id)arg0 queue:(unk)arg1  ;
-(void)cancel;
-(void)startWithCompletionHandler:(id)arg0 ;


@end


#endif