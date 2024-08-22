// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMAPITEMREQUEST_H
#define MKMAPITEMREQUEST_H

@protocol MKMapServiceTicket;

#import <Foundation/Foundation.h>

#import "MKMapFeatureAnnotation.h"

@interface MKMapItemRequest : NSObject {
    id<MKMapServiceTicket> *_ticket;
    os_unfair_lock_s _stateLock;
    BOOL _loading;
    BOOL _cancelled;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) MKMapFeatureAnnotation *featureAnnotation; // ivar: _featureAnnotation
@property (readonly, nonatomic, getter=isLoading) BOOL loading;


-(id)initWithMapFeatureAnnotation:(id)arg0 ;
-(void)_handleMapItems:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_performLookupRequestWithMapItemIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel;
-(void)getMapItemWithCompletionHandler:(id)arg0 ;


@end


#endif