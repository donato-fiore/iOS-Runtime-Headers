// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBFEEDCONFIGURATION_H
#define NTPBFEEDCONFIGURATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBFeedConfiguration : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *freeAFeedID; // ivar: _freeAFeedID
@property (retain, nonatomic) NSString *freeBFeedID; // ivar: _freeBFeedID
@property (retain, nonatomic) NSString *freeCFeedID; // ivar: _freeCFeedID
@property (readonly, nonatomic) BOOL hasFreeAFeedID;
@property (readonly, nonatomic) BOOL hasFreeBFeedID;
@property (readonly, nonatomic) BOOL hasFreeCFeedID;
@property (readonly, nonatomic) BOOL hasPaidAFeedID;
@property (readonly, nonatomic) BOOL hasPaidBFeedID;
@property (readonly, nonatomic) BOOL hasPaidCFeedID;
@property (retain, nonatomic) NSString *paidAFeedID; // ivar: _paidAFeedID
@property (retain, nonatomic) NSString *paidBFeedID; // ivar: _paidBFeedID
@property (retain, nonatomic) NSString *paidCFeedID; // ivar: _paidCFeedID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif