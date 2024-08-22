// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDREMOTERENDERINGSERVICE_H
#define SLDREMOTERENDERINGSERVICE_H

@class NSMapTable, NSString, NSMutableArray;
@protocol SLDService;

#import <Foundation/Foundation.h>


@interface SLDRemoteRenderingService : NSObject <SLDService>



@property (retain, nonatomic) NSMapTable *connectionViewIDs; // ivar: _connectionViewIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMapTable *viewIDConnections; // ivar: _viewIDConnections
@property (retain, nonatomic) NSMapTable *viewIdentifierMap; // ivar: _viewIdentifierMap
@property (retain, nonatomic) NSMutableArray *viewLRUCache; // ivar: _viewLRUCache


+(id)remoteObjectProtocol;
+(id)sharedService;
-(BOOL)_hasConnections;
-(id)_remoteContentForViewIdentifier:(id)arg0 layerContextID:(NSUInteger)arg1 connection:(id)arg2 ;
-(id)_viewIDForStyle:(id)arg0 tag:(id)arg1 ;
-(id)init;
-(id)slotMachineForViewIdentifier:(id)arg0 ;
-(void)_allConnectionsDisconnected;
-(void)_connection:(id)arg0 doesNotNeedViewWithIdentifier:(id)arg1 ;
-(void)_connection:(id)arg0 onlyNeedsViewWithIdentifier:(id)arg1 ;
-(void)_connectionTouchedView:(id)arg0 ;
-(void)_destroyViewWithID:(id)arg0 ;
-(void)lostConnection:(id)arg0 ;
-(void)receivedConnection:(id)arg0 ;


@end


#endif