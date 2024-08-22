// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBISSUEVIEWDATA_H
#define NTPBISSUEVIEWDATA_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBIssueViewData : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIssueViewingSessionId;
@property (retain, nonatomic) NSData *issueViewingSessionId; // ivar: _issueViewingSessionId


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