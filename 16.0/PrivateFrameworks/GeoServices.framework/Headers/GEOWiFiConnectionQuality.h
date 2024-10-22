// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWIFICONNECTIONQUALITY_H
#define GEOWIFICONNECTIONQUALITY_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOWiFiBeaconInfo.h"
#import "GEOWiFiHarvestLabel.h"
#import "GEOLocation.h"
#import "GEOWiFiPasspointInfo.h"

@interface GEOWiFiConnectionQuality : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _authTraits;
    ? _nameAttributes;
    ? _traits;
    GEOWiFiBeaconInfo *_beaconInfo;
    NSUInteger _bytesInActive;
    NSUInteger _bytesInTotal;
    NSUInteger _bytesOutActive;
    NSUInteger _bytesOutTotal;
    NSUInteger _dataStalls;
    NSMutableArray *_essMembers;
    NSUInteger _failedConnections;
    NSUInteger _faultyStay;
    NSMutableArray *_feedbacks;
    NSMutableArray *_hotspotHelperProviders;
    NSString *_identifier;
    GEOWiFiHarvestLabel *_label;
    GEOLocation *_location;
    NSUInteger _lowLQMStay;
    NSUInteger _lowqStay;
    NSUInteger _lqmTranCount;
    NSMutableArray *_nearbyBSSs;
    NSUInteger _overAllStay;
    NSUInteger _packetsIn;
    NSUInteger _packetsOut;
    GEOWiFiPasspointInfo *_passpointInfo;
    NSUInteger _reTxBytes;
    NSUInteger _receivedDupes;
    CGFloat _responsivenessScore;
    NSMutableArray *_roamStates;
    NSUInteger _rxOutOfOrderBytes;
    NSMutableArray *_speedTests;
    NSUInteger _successfulConnections;
    NSUInteger _timeOfDay;
    NSUInteger _timestamp;
    NSString *_uniqueID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _apMode;
    int _associationLength;
    int _associationReason;
    unsigned int _band;
    int _captiveDetermination;
    int _cca;
    unsigned int _channelWidth;
    unsigned int _channel;
    int _clientAssociationSubreason;
    int _disassociationReason;
    int _dohAvailability;
    int _networkOrigin;
    int _networkType;
    unsigned int _phyMode;
    float _roundTripTimeAvgActive;
    float _roundTripTimeAvg;
    float _roundTripTimeMinActive;
    float _roundTripTimeMin;
    float _roundTripTimeVarActive;
    float _roundTripTimeVar;
    int _rssi;
    int _snr;
    unsigned int _sslConnectionCount;
    unsigned int _sslErrorCount;
    float _topDLRate;
    int _type;
    unsigned int _wasCaptiveFlag;
    BOOL _hotspot20;
    BOOL _isEdgeBSS;
    BOOL _isKnownGood;
    BOOL _lowInternetDL;
    BOOL _lowInternetUL;
    ? _flags;
}


@property (nonatomic) int apMode;
@property (nonatomic) int associationLength;
@property (nonatomic) int associationReason;
@property (readonly, nonatomic) *int authTraits;
@property (readonly, nonatomic) NSUInteger authTraitsCount;
@property (nonatomic) unsigned int band;
@property (retain, nonatomic) GEOWiFiBeaconInfo *beaconInfo;
@property (nonatomic) NSUInteger bytesInActive;
@property (nonatomic) NSUInteger bytesInTotal;
@property (nonatomic) NSUInteger bytesOutActive;
@property (nonatomic) NSUInteger bytesOutTotal;
@property (nonatomic) int captiveDetermination;
@property (nonatomic) int cca;
@property (nonatomic) unsigned int channel;
@property (nonatomic) unsigned int channelWidth;
@property (nonatomic) int clientAssociationSubreason;
@property (nonatomic) NSUInteger dataStalls;
@property (nonatomic) int disassociationReason;
@property (nonatomic) int dohAvailability;
@property (retain, nonatomic) NSMutableArray *essMembers;
@property (nonatomic) NSUInteger failedConnections;
@property (nonatomic) NSUInteger faultyStay;
@property (retain, nonatomic) NSMutableArray *feedbacks;
@property (nonatomic) BOOL hasApMode;
@property (nonatomic) BOOL hasAssociationLength;
@property (nonatomic) BOOL hasAssociationReason;
@property (nonatomic) BOOL hasBand;
@property (readonly, nonatomic) BOOL hasBeaconInfo;
@property (nonatomic) BOOL hasBytesInActive;
@property (nonatomic) BOOL hasBytesInTotal;
@property (nonatomic) BOOL hasBytesOutActive;
@property (nonatomic) BOOL hasBytesOutTotal;
@property (nonatomic) BOOL hasCaptiveDetermination;
@property (nonatomic) BOOL hasCca;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasChannelWidth;
@property (nonatomic) BOOL hasClientAssociationSubreason;
@property (nonatomic) BOOL hasDataStalls;
@property (nonatomic) BOOL hasDisassociationReason;
@property (nonatomic) BOOL hasDohAvailability;
@property (nonatomic) BOOL hasFailedConnections;
@property (nonatomic) BOOL hasFaultyStay;
@property (nonatomic) BOOL hasHotspot20;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsEdgeBSS;
@property (nonatomic) BOOL hasIsKnownGood;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasLowInternetDL;
@property (nonatomic) BOOL hasLowInternetUL;
@property (nonatomic) BOOL hasLowLQMStay;
@property (nonatomic) BOOL hasLowqStay;
@property (nonatomic) BOOL hasLqmTranCount;
@property (nonatomic) BOOL hasNetworkOrigin;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasOverAllStay;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (readonly, nonatomic) BOOL hasPasspointInfo;
@property (nonatomic) BOOL hasPhyMode;
@property (nonatomic) BOOL hasReTxBytes;
@property (nonatomic) BOOL hasReceivedDupes;
@property (nonatomic) BOOL hasResponsivenessScore;
@property (nonatomic) BOOL hasRoundTripTimeAvg;
@property (nonatomic) BOOL hasRoundTripTimeAvgActive;
@property (nonatomic) BOOL hasRoundTripTimeMin;
@property (nonatomic) BOOL hasRoundTripTimeMinActive;
@property (nonatomic) BOOL hasRoundTripTimeVar;
@property (nonatomic) BOOL hasRoundTripTimeVarActive;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasRxOutOfOrderBytes;
@property (nonatomic) BOOL hasSnr;
@property (nonatomic) BOOL hasSslConnectionCount;
@property (nonatomic) BOOL hasSslErrorCount;
@property (nonatomic) BOOL hasSuccessfulConnections;
@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTopDLRate;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (nonatomic) BOOL hasWasCaptiveFlag;
@property (nonatomic) BOOL hotspot20;
@property (retain, nonatomic) NSMutableArray *hotspotHelperProviders;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isEdgeBSS;
@property (nonatomic) BOOL isKnownGood;
@property (retain, nonatomic) GEOWiFiHarvestLabel *label;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) BOOL lowInternetDL;
@property (nonatomic) BOOL lowInternetUL;
@property (nonatomic) NSUInteger lowLQMStay;
@property (nonatomic) NSUInteger lowqStay;
@property (nonatomic) NSUInteger lqmTranCount;
@property (readonly, nonatomic) *int nameAttributes;
@property (readonly, nonatomic) NSUInteger nameAttributesCount;
@property (retain, nonatomic) NSMutableArray *nearbyBSSs;
@property (nonatomic) int networkOrigin;
@property (nonatomic) int networkType;
@property (nonatomic) NSUInteger overAllStay;
@property (nonatomic) NSUInteger packetsIn;
@property (nonatomic) NSUInteger packetsOut;
@property (retain, nonatomic) GEOWiFiPasspointInfo *passpointInfo;
@property (nonatomic) unsigned int phyMode;
@property (nonatomic) NSUInteger reTxBytes;
@property (nonatomic) NSUInteger receivedDupes;
@property (nonatomic) CGFloat responsivenessScore;
@property (retain, nonatomic) NSMutableArray *roamStates;
@property (nonatomic) float roundTripTimeAvg;
@property (nonatomic) float roundTripTimeAvgActive;
@property (nonatomic) float roundTripTimeMin;
@property (nonatomic) float roundTripTimeMinActive;
@property (nonatomic) float roundTripTimeVar;
@property (nonatomic) float roundTripTimeVarActive;
@property (nonatomic) int rssi;
@property (nonatomic) NSUInteger rxOutOfOrderBytes;
@property (nonatomic) int snr;
@property (retain, nonatomic) NSMutableArray *speedTests;
@property (nonatomic) unsigned int sslConnectionCount;
@property (nonatomic) unsigned int sslErrorCount;
@property (nonatomic) NSUInteger successfulConnections;
@property (nonatomic) NSUInteger timeOfDay;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) float topDLRate;
@property (readonly, nonatomic) *int traits;
@property (readonly, nonatomic) NSUInteger traitsCount;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) unsigned int wasCaptiveFlag;


+(BOOL)isValid:(id)arg0 ;
+(Class)feedbackType;
+(Class)hotspotHelperProviderType;
+(Class)nearbyBSSType;
+(Class)speedTestType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)apModeAsString:(int)arg0 ;
-(id)associationLengthAsString:(int)arg0 ;
-(id)associationReasonAsString:(int)arg0 ;
-(id)authTraitsAsString:(int)arg0 ;
-(id)captiveDeterminationAsString:(int)arg0 ;
-(id)clientAssociationSubreasonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)disassociationReasonAsString:(int)arg0 ;
-(id)dohAvailabilityAsString:(int)arg0 ;
-(id)essMembersAtIndex:(NSUInteger)arg0 ;
-(id)feedbackAtIndex:(NSUInteger)arg0 ;
-(id)hotspotHelperProviderAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)nameAttributesAsString:(int)arg0 ;
-(id)nearbyBSSAtIndex:(NSUInteger)arg0 ;
-(id)networkOriginAsString:(int)arg0 ;
-(id)networkTypeAsString:(int)arg0 ;
-(id)roamStatesAtIndex:(NSUInteger)arg0 ;
-(id)speedTestAtIndex:(NSUInteger)arg0 ;
-(id)traitsAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsApMode:(id)arg0 ;
-(int)StringAsAssociationLength:(id)arg0 ;
-(int)StringAsAssociationReason:(id)arg0 ;
-(int)StringAsAuthTraits:(id)arg0 ;
-(int)StringAsCaptiveDetermination:(id)arg0 ;
-(int)StringAsClientAssociationSubreason:(id)arg0 ;
-(int)StringAsDisassociationReason:(id)arg0 ;
-(int)StringAsDohAvailability:(id)arg0 ;
-(int)StringAsNameAttributes:(id)arg0 ;
-(int)StringAsNetworkOrigin:(id)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(int)StringAsTraits:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(int)authTraitsAtIndex:(NSUInteger)arg0 ;
-(int)nameAttributesAtIndex:(NSUInteger)arg0 ;
-(int)traitsAtIndex:(NSUInteger)arg0 ;
-(void)addAuthTraits:(int)arg0 ;
-(void)addEssMembers:(id)arg0 ;
-(void)addFeedback:(id)arg0 ;
-(void)addHotspotHelperProvider:(id)arg0 ;
-(void)addNameAttributes:(int)arg0 ;
-(void)addNearbyBSS:(id)arg0 ;
-(void)addRoamStates:(id)arg0 ;
-(void)addSpeedTest:(id)arg0 ;
-(void)addTraits:(int)arg0 ;
-(void)clearAuthTraits;
-(void)clearEssMembers;
-(void)clearFeedbacks;
-(void)clearHotspotHelperProviders;
-(void)clearNameAttributes;
-(void)clearNearbyBSSs;
-(void)clearRoamStates;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSpeedTests;
-(void)clearTraits;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif