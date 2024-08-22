// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITACCESSORYRELAYSETUP_H
#define AWDHOMEKITACCESSORYRELAYSETUP_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "AWDHomeKitVendorInformation.h"

@interface AWDHomeKitAccessoryRelaySetup : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int actionType; // ivar: _actionType
@property (nonatomic) int certified; // ivar: _certified
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // ivar: _vendorDetails


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionTypeAsString:(int)arg0 ;
-(id)certifiedAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsActionType:(id)arg0 ;
-(int)StringAsCertified:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif