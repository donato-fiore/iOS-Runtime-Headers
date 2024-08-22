// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXTIMELINERELEVANCEPBTIMELINERELEVANCESTACKCONFIGSUMMARY_H
#define ATXTIMELINERELEVANCEPBTIMELINERELEVANCESTACKCONFIGSUMMARY_H

@class PBCodable;
@protocol NSCopying;



@interface ATXTimelineRelevancePBTimelineRelevanceStackConfigSummary : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNonSmartStacksWithWidget;
@property (nonatomic) BOOL hasSmartStacksWithWidget;
@property (nonatomic) BOOL hasStandaloneWidgets;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWidgetsWithUnknownStackKind;
@property (nonatomic) int nonSmartStacksWithWidget; // ivar: _nonSmartStacksWithWidget
@property (nonatomic) int smartStacksWithWidget; // ivar: _smartStacksWithWidget
@property (nonatomic) int standaloneWidgets; // ivar: _standaloneWidgets
@property (nonatomic) NSInteger timestamp; // ivar: _timestamp
@property (nonatomic) int widgetsWithUnknownStackKind; // ivar: _widgetsWithUnknownStackKind


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