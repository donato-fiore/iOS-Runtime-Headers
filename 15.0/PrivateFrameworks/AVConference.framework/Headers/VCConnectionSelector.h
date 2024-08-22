// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCONNECTIONSELECTOR_H
#define VCCONNECTIONSELECTOR_H

@class NSArray;
@protocol VCConnectionProtocol;

#import <Foundation/Foundation.h>


@interface VCConnectionSelector : NSObject {
    BOOL _isMultiwaySession;
    ? _connectionSelectionPolicy;
    ? _endToEndLinks;
}


@property (retain, nonatomic) NSObject<VCConnectionProtocol> *connectionForDuplication; // ivar: _connectionForDuplication
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *connectionForDuplicationNonProbingVersion; // ivar: _connectionForDuplicationNonProbingVersion
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *lastPrimaryConnectionInUse; // ivar: _lastPrimaryConnectionInUse
@property (copy, nonatomic) NSArray *linkPreferenceOrder; // ivar: _linkPreferenceOrder
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *primaryConnection; // ivar: _primaryConnection
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *secondaryConnection; // ivar: _secondaryConnection
@property (readonly) ? serverLinks; // ivar: _serverLinks


-(BOOL)isPrimaryConnectionSameAsConnection:(id)arg0 ;
-(BOOL)selectPrimaryAndSecondaryWithConnection:(id)arg0 ;
-(id)initWithMultiwayEnabled:(BOOL)arg0 ;
-(struct ? *)getConnectionSelectionPolicy;
-(void)dealloc;
-(void)selectConnectionForGroupType:(unsigned char)arg0 fromConnectionArray:(id)arg1 asPrimary:(BOOL)arg2 ;
-(void)updateConnectionForDuplicationForDuplicationReason:(unsigned char)arg0 duplicationEnhancementEnabled:(BOOL)arg1 preferredLocalInterfaceForDuplication:(unsigned char)arg2 preferredRemoteInterfaceForDuplication:(unsigned char)arg3 connectionArray:(id)arg4 ;
-(void)updateConnectionSelectionPolicyWithPreferRelayOverP2P:(BOOL)arg0 preferNonVPN:(BOOL)arg1 preferE2E:(BOOL)arg2 ;
-(void)updatePrimaryWithConnection:(id)arg0 ;
-(void)updateSecondaryWithConnection:(id)arg0 ;
-(void)updateSelectedConnectionsForGroupType:(unsigned char)arg0 connectionAdded:(id)arg1 ;
-(void)updateSelectedConnectionsForGroupType:(unsigned char)arg0 connectionRemoved:(id)arg1 connectionArray:(id)arg2 ;
-(void)useConnectionAsPrimary:(id)arg0 ;


@end


#endif