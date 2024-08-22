// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLOOKAROUNDSCENEREQUEST_H
#define MKLOOKAROUNDSCENEREQUEST_H

@protocol MKLocationManagerOperation, MKMapServiceTicket;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKLookAroundSceneRequest : NSObject {
    id<MKLocationManagerOperation> *_singleLocationUpdate;
    id<MKMapServiceTicket> *_ticket;
    os_unfair_lock_s _stateLock;
    BOOL _loading;
    BOOL _cancelled;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem


-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(void)_handleMapItems:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_performLookupRequestWithMapItem:(id)arg0 orCoordinate:(struct CLLocationCoordinate2D )arg1 completionHandler:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)getSceneWithCompletionHandler:(id)arg0 ;


@end


#endif