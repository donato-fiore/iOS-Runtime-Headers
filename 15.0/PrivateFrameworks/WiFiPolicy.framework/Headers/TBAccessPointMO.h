// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBACCESSPOINTMO_H
#define TBACCESSPOINTMO_H

@class NSManagedObject, NSString, NSDate;
@protocol TBAccessPoint, NSSecureCoding, NSCoding, TBScore;


#import "TBNetworkMO.h"

@interface TBAccessPointMO : NSManagedObject <TBAccessPoint, NSSecureCoding, NSCoding>



@property (readonly, nonatomic) NSString *BSSID;
@property (readonly, nonatomic, getter=isTCPGood) BOOL TCPGood;
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEdge) BOOL edge;
@property (nonatomic) BOOL edge;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lat;
@property (readonly, nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat lng;
@property (readonly, nonatomic) CGFloat longitude;
@property (retain, nonatomic) TBNetworkMO *network;
@property (readonly, nonatomic) NSObject<TBScore> *popularityScore;
@property (nonatomic) int popularityScoreValue;
@property (readonly, nonatomic) NSObject<TBScore> *qualityScore;
@property (nonatomic) int qualityScoreValue;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tcpGood;


+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)fetchRequest;
+(id)generateNewAccessPointObjectFromMOC:(id)arg0 ;
+(void)removeAllAccessPointsInMOC:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif