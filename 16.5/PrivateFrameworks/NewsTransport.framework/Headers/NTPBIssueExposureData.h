// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBISSUEEXPOSUREDATA_H
#define NTPBISSUEEXPOSUREDATA_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBIssueExposureData : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIssueSessionId;
@property (retain, nonatomic) NSData *issueSessionId; // ivar: _issueSessionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif