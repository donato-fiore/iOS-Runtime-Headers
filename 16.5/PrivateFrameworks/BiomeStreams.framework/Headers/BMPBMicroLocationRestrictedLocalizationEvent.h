// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBMICROLOCATIONRESTRICTEDLOCALIZATIONEVENT_H
#define BMPBMICROLOCATIONRESTRICTEDLOCALIZATIONEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBMicroLocationRestrictedLocalizationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimeStamp; // ivar: _absoluteTimeStamp
@property (retain, nonatomic) NSString *clientBundleId; // ivar: _clientBundleId
@property (nonatomic) BOOL hasAbsoluteTimeStamp;
@property (readonly, nonatomic) BOOL hasClientBundleId;
@property (nonatomic) BOOL hasMaxProbability;
@property (readonly, nonatomic) BOOL hasMaxProbabilityLabel;
@property (nonatomic) CGFloat maxProbability; // ivar: _maxProbability
@property (retain, nonatomic) NSString *maxProbabilityLabel; // ivar: _maxProbabilityLabel
@property (retain, nonatomic) NSMutableArray *numDevicesVectors; // ivar: _numDevicesVectors
@property (retain, nonatomic) NSMutableArray *probabilityVectors; // ivar: _probabilityVectors


+(Class)numDevicesVectorType;
+(Class)probabilityVectorType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)numDevicesVectorAtIndex:(NSUInteger)arg0 ;
-(id)probabilityVectorAtIndex:(NSUInteger)arg0 ;
-(void)addNumDevicesVector:(id)arg0 ;
-(void)addProbabilityVector:(id)arg0 ;
-(void)clearNumDevicesVectors;
-(void)clearProbabilityVectors;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif