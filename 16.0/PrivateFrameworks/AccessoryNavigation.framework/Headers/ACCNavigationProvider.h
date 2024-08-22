// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCNAVIGATIONPROVIDER_H
#define ACCNAVIGATIONPROVIDER_H

@class NSMutableDictionary, NSMutableArray, NSString, NSXPCConnection;
@protocol ACCNavigationXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCNavigationProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessories; // ivar: _accessories
@property (retain, nonatomic) NSMutableArray *delegates; // ivar: _delegates
@property (retain, nonatomic) NSString *providerUID; // ivar: _providerUID
@property (retain, nonatomic) NSObject<ACCNavigationXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection


-(id)accessoryForUID:(id)arg0 ;
-(id)delegatesImplementing:(SEL)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)accessoryNavigationAttached:(id)arg0 componentList:(id)arg1 ;
-(void)accessoryNavigationDetached:(id)arg0 ;
-(void)accessoryNavigationObjectDetection:(id)arg0 componentIdList:(id)arg1 updateInfo:(id)arg2 ;
-(void)accessoryNavigationStartRouteGuidance:(id)arg0 componentIdList:(id)arg1 options:(NSUInteger)arg2 ;
-(void)accessoryNavigationStopRouteGuidance:(id)arg0 componentIdList:(id)arg1 ;
-(void)connectToServer;
-(void)dealloc;
-(void)detachAllAccessories;
-(void)objectDetection:(id)arg0 startComponentIdList:(id)arg1 objectTypes:(id)arg2 ;
-(void)objectDetection:(id)arg0 stopComponentIdList:(id)arg1 ;
-(void)routeGuidance:(id)arg0 laneGuidanceInfo:(id)arg1 componentIdList:(id)arg2 ;
-(void)routeGuidance:(id)arg0 maneuverUpdateInfo:(id)arg1 componentIdList:(id)arg2 ;
-(void)routeGuidance:(id)arg0 updateInfo:(id)arg1 componentIdList:(id)arg2 ;


@end


#endif