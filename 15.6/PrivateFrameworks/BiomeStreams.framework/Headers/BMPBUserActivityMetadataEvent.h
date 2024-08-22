// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBUSERACTIVITYMETADATAEVENT_H
#define BMPBUSERACTIVITYMETADATAEVENT_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface BMPBUserActivityMetadataEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (retain, nonatomic) NSString *associatedBundleId; // ivar: _associatedBundleId
@property (retain, nonatomic) NSString *associatedURLString; // ivar: _associatedURLString
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasActivityType;
@property (readonly, nonatomic) BOOL hasAssociatedBundleId;
@property (nonatomic) BOOL hasAssociatedImageRepresentation; // ivar: _hasAssociatedImageRepresentation
@property (readonly, nonatomic) BOOL hasAssociatedURLString;
@property (nonatomic) BOOL hasHasAssociatedImageRepresentation;
@property (readonly, nonatomic) BOOL hasModeIdentifier;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUserActivityData;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics
@property (retain, nonatomic) NSData *userActivityData; // ivar: _userActivityData
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicsAtIndex:(NSUInteger)arg0 ;
-(void)addTopics:(id)arg0 ;
-(void)clearTopics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif