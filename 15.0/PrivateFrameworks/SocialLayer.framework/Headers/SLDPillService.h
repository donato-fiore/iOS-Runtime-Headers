// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLDPILLSERVICE_H
#define SLDPILLSERVICE_H

@class NSMapTable, NSString, UISSlotMachine, NSMutableArray;
@protocol SLDService, SLDPillService;

#import <Foundation/Foundation.h>


@interface SLDPillService : NSObject <SLDService, SLDPillService>



@property (retain, nonatomic) NSMapTable *connectionPillIDs; // ivar: _connectionPillIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISSlotMachine *highlightDisambiguationPillSlotMachine; // ivar: _highlightDisambiguationPillSlotMachine
@property (retain, nonatomic) UISSlotMachine *highlightPillSlotMachine; // ivar: _highlightPillSlotMachine
@property (retain, nonatomic) NSMapTable *pillIDConnections; // ivar: _pillIDConnections
@property (retain, nonatomic) NSMapTable *pillIdentifierMap; // ivar: _pillIdentifierMap
@property (retain, nonatomic) NSMutableArray *pillLRUCache; // ivar: _pillLRUCache
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
-(BOOL)_hasConnections;
-(id)_applicationIdentifierForConnection:(id)arg0 ;
-(id)_attributionsFromIDs:(id)arg0 appID:(id)arg1 ;
-(id)_pillIDForStyle:(id)arg0 tag:(id)arg1 ;
-(id)_remoteContentForPillIdentifier:(id)arg0 layerContextID:(NSUInteger)arg1 connection:(id)arg2 ;
-(id)_slotMachineForPillIdentifier:(id)arg0 ;
-(id)init;
-(void)_allConnectionsDisconnected;
-(void)_connection:(id)arg0 doesNotNeedPillWithIdentifier:(id)arg1 ;
-(void)_connection:(id)arg0 onlyNeedsPillWithIdentifier:(id)arg1 ;
-(void)_connectionTouchedPill:(id)arg0 ;
-(void)_destroyPillWithID:(id)arg0 ;
-(void)accessibilityLabelForAttributionIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)accessibilityLabelForAttributionIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)highlightDisambiguationPillForAttributionIdentifier:(id)arg0 style:(id)arg1 maxWidth:(CGFloat)arg2 variant:(NSUInteger)arg3 layerContextID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)highlightPillForAttributionIdentifiers:(id)arg0 style:(id)arg1 maxWidth:(CGFloat)arg2 variant:(NSUInteger)arg3 layerContextID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)lostConnection:(id)arg0 ;
-(void)receivedConnection:(id)arg0 ;


@end


#endif