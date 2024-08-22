// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBMICROLOCATIONTRUTHTAGEVENT_H
#define BMPBMICROLOCATIONTRUTHTAGEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBMicroLocationTruthTagEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *clientBundleId; // ivar: _clientBundleId
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasClientBundleId;
@property (readonly, nonatomic) BOOL hasRecordingRequestIdentifier;
@property (readonly, nonatomic) BOOL hasTruthTagIdentifier;
@property (retain, nonatomic) NSString *recordingRequestIdentifier; // ivar: _recordingRequestIdentifier
@property (retain, nonatomic) NSString *truthTagIdentifier; // ivar: _truthTagIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif