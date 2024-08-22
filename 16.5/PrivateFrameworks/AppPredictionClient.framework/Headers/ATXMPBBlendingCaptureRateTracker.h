// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMPBBLENDINGCAPTURERATETRACKER_H
#define ATXMPBBLENDINGCAPTURERATETRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBBlendingCaptureRateTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (nonatomic) int captureType; // ivar: _captureType
@property (nonatomic) BOOL captured; // ivar: _captured
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (retain, nonatomic) NSString *executableType; // ivar: _executableType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (nonatomic) BOOL hasCaptureType;
@property (nonatomic) BOOL hasCaptured;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (readonly, nonatomic) BOOL hasExecutableType;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)captureTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCaptureType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif