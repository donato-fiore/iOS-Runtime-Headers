// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBNETWORKMO_H
#define TBNETWORKMO_H

@class NSManagedObject, NSString, NSSet, NSDate, NSArray;
@protocol TBNetwork, NSSecureCoding, NSCoding, TBScore;


#import "TBTileMO.h"

@interface TBNetworkMO : NSManagedObject <TBNetwork, NSSecureCoding, NSCoding>



@property (readonly, nonatomic) NSString *SSID;
@property (readonly, nonatomic) NSUInteger accessPointCount;
@property (readonly, nonatomic) NSInteger accessPointCount;
@property (readonly, nonatomic) NSSet *accessPoints;
@property (retain, nonatomic) NSSet *accessPoints;
@property (readonly, nonatomic) NSString *attributesDescription;
@property (readonly, nonatomic) NSString *authDescription;
@property (readonly, nonatomic) NSUInteger authMask;
@property (nonatomic) NSInteger authMask;
@property (readonly, nonatomic, getter=isCaptive) BOOL captive;
@property (nonatomic) BOOL captive;
@property (readonly, nonatomic) CGFloat centroidLat;
@property (nonatomic) CGFloat centroidLat;
@property (readonly, nonatomic) CGFloat centroidLng;
@property (nonatomic) CGFloat centroidLng;
@property (copy, nonatomic) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isMoving) BOOL moving;
@property (nonatomic) BOOL moving;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *ownerIdentifiers;
@property (retain, nonatomic) NSArray *ownerIdentifiers;
@property (readonly, nonatomic) NSObject<TBScore> *popularityScore;
@property (nonatomic) int popularityScoreValue;
@property (readonly, nonatomic, getter=isPublic) BOOL public;
@property (nonatomic) BOOL public;
@property (readonly, nonatomic) NSObject<TBScore> *qualityScore;
@property (nonatomic) int qualityScoreValue;
@property (readonly, nonatomic) NSString *remoteIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspicious) BOOL suspicious;
@property (nonatomic) BOOL suspicious;
@property (retain, nonatomic) TBTileMO *tile;
@property (readonly, nonatomic) NSUInteger tileKey;
@property (readonly, nonatomic) NSInteger tileKey;
@property (nonatomic) NSInteger timestamp;
@property (readonly, nonatomic) NSUInteger type;
@property (nonatomic) NSInteger type;
@property (readonly, nonatomic) NSUInteger venueGroup;
@property (nonatomic) NSInteger venueGroup;
@property (readonly, nonatomic) unsigned int venueType;
@property (nonatomic) int venueType;


+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)fetchRequest;
+(id)generateNewNetworkObjectFromMOC:(id)arg0 ;
+(void)removeAllNetworksInMOC:(id)arg0 ;
+(void)removeNetworksUsingPredicate:(id)arg0 moc:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif