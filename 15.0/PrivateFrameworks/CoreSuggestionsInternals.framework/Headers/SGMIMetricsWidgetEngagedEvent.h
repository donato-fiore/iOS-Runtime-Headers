// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIMETRICSWIDGETENGAGEDEVENT_H
#define SGMIMETRICSWIDGETENGAGEDEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface SGMIMetricsWidgetEngagedEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasWidgetViewId;
@property (nonatomic) unsigned int index; // ivar: _index
@property (nonatomic) NSUInteger widgetViewId; // ivar: _widgetViewId


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