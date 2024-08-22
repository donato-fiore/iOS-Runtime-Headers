// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPQUICKTYPENAVIGATIONSERVANT_H
#define PPQUICKTYPENAVIGATIONSERVANT_H

@class GEONavigationListener, NSString;
@protocol PPQuickTypeServantProtocol, GEONavigationListenerDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PPQuickTypeNavigationServant : NSObject <PPQuickTypeServantProtocol, GEONavigationListenerDelegate>

 {
    GEONavigationListener *_navigationListener;
    int _navigationState;
    NSString *_destinationName;
    NSString *_streetName;
    CGFloat _remainingTimeToDestination;
    CGFloat _remainingDistanceToDestination;
    NSObject<OS_dispatch_semaphore> *_stateSemaphore;
    NSObject<OS_dispatch_semaphore> *_streetSemaphore;
    NSObject<OS_dispatch_semaphore> *_summarySemaphore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)quickTypeItemsWithQuery:(id)arg0 limit:(NSUInteger)arg1 explanationSet:(id)arg2 ;
-(void)dealloc;
-(void)navigationListener:(id)arg0 didUpdateCurrentRoadName:(id)arg1 ;
-(void)navigationListener:(id)arg0 didUpdateGuidanceState:(id)arg1 ;
-(void)navigationListener:(id)arg0 didUpdatePositionFromDestination:(struct ? )arg1 ;
-(void)navigationListener:(id)arg0 didUpdateRouteSummary:(id)arg1 ;


@end


#endif