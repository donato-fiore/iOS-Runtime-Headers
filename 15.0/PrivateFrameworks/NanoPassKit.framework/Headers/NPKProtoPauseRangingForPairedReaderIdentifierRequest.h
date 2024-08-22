// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOPAUSERANGINGFORPAIREDREADERIDENTIFIERREQUEST_H
#define NPKPROTOPAUSERANGINGFORPAIREDREADERIDENTIFIERREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NPKProtoPauseRangingForPairedReaderIdentifierRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger durationInSeconds; // ivar: _durationInSeconds
@property (nonatomic) BOOL hasDurationInSeconds;
@property (readonly, nonatomic) BOOL hasPairedReaderIdentifier;
@property (retain, nonatomic) NSString *pairedReaderIdentifier; // ivar: _pairedReaderIdentifier


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