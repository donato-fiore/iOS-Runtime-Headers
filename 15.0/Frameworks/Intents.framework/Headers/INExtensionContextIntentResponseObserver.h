// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INEXTENSIONCONTEXTINTENTRESPONSEOBSERVER_H
#define INEXTENSIONCONTEXTINTENTRESPONSEOBSERVER_H

@class NSString, NSMapTable;
@protocol INGetRideStatusIntentResponseObserver, INGetCarPowerLevelStatusIntentResponseObserver, INIntentResponseObserver;

#import <Foundation/Foundation.h>


@interface INExtensionContextIntentResponseObserver : NSObject <INGetRideStatusIntentResponseObserver, INGetCarPowerLevelStatusIntentResponseObserver>

 {
    id<INIntentResponseObserver> *_remoteObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *remoteObservers; // ivar: _remoteObservers
@property (readonly) Class superclass;


-(id)init;
-(void)_intentResponseDidUpdate:(id)arg0 ;
-(void)getCarPowerLevelStatusResponseDidUpdate:(id)arg0 ;
-(void)getRideStatusResponseDidUpdate:(id)arg0 ;
-(void)setObserver:(id)arg0 forConnection:(id)arg1 ;


@end


#endif