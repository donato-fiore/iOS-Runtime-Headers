// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSANALYTICSSAFARIDIDTERMINATEWEBPROCESSBEFORENAVIGATION_H
#define WBSANALYTICSSAFARIDIDTERMINATEWEBPROCESSBEFORENAVIGATION_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariDidTerminateWebProcessBeforeNavigation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTerminationReason;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int terminationReason; // ivar: _terminationReason
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)terminationReasonAsString:(int)arg0 ;
-(int)StringAsTerminationReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif