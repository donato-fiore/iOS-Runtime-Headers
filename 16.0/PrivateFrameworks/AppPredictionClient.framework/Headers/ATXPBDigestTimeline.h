// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBDIGESTTIMELINE_H
#define ATXPBDIGESTTIMELINE_H

@class PBCodable;
@protocol ATXJSONSerializableProtocol, NSCopying;



@interface ATXPBDigestTimeline : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat digestRemovedTimestamp; // ivar: _digestRemovedTimestamp
@property (nonatomic) CGFloat firstCollapsedViewTimestamp; // ivar: _firstCollapsedViewTimestamp
@property (nonatomic) CGFloat firstScheduledViewTimestamp; // ivar: _firstScheduledViewTimestamp
@property (nonatomic) CGFloat firstUpcomingViewTimestamp; // ivar: _firstUpcomingViewTimestamp
@property (nonatomic) BOOL hasDigestRemovedTimestamp;
@property (nonatomic) BOOL hasFirstCollapsedViewTimestamp;
@property (nonatomic) BOOL hasFirstScheduledViewTimestamp;
@property (nonatomic) BOOL hasFirstUpcomingViewTimestamp;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif