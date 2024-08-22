// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDMAILFEATUREENGAGEMENTREPORT_H
#define AWDMAILFEATUREENGAGEMENTREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMailFeatureEngagementReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int feature; // ivar: _feature
@property (nonatomic) int filterStatus; // ivar: _filterStatus
@property (nonatomic) BOOL fromSwipeMenu; // ivar: _fromSwipeMenu
@property (nonatomic) BOOL hasFeature;
@property (nonatomic) BOOL hasFilterStatus;
@property (nonatomic) BOOL hasFromSwipeMenu;
@property (nonatomic) BOOL hasInView;
@property (nonatomic) BOOL hasIncludeAttachments;
@property (nonatomic) BOOL hasInteractionGesture;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUsedPrediction;
@property (nonatomic) int inView; // ivar: _inView
@property (nonatomic) BOOL includeAttachments; // ivar: _includeAttachments
@property (nonatomic) int interactionGesture; // ivar: _interactionGesture
@property (nonatomic) int sourceType; // ivar: _sourceType
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) BOOL usedPrediction; // ivar: _usedPrediction


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)featureAsString:(int)arg0 ;
-(id)filterStatusAsString:(int)arg0 ;
-(id)inViewAsString:(int)arg0 ;
-(id)interactionGestureAsString:(int)arg0 ;
-(id)sourceTypeAsString:(int)arg0 ;
-(int)StringAsFeature:(id)arg0 ;
-(int)StringAsFilterStatus:(id)arg0 ;
-(int)StringAsInView:(id)arg0 ;
-(int)StringAsInteractionGesture:(id)arg0 ;
-(int)StringAsSourceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif