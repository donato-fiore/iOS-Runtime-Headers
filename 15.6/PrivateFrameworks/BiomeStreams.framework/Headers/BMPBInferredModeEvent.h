// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBINFERREDMODEEVENT_H
#define BMPBINFERREDMODEEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBInferredModeEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (nonatomic) CGFloat confidenceScore; // ivar: _confidenceScore
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL hasIsAutomationEnabled;
@property (nonatomic) BOOL hasIsStart;
@property (readonly, nonatomic) BOOL hasModeIdentifier;
@property (nonatomic) BOOL hasModeType;
@property (nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasOriginAnchorType;
@property (readonly, nonatomic) BOOL hasOriginBundleId;
@property (nonatomic) BOOL hasShouldSuggestTriggers;
@property (nonatomic) BOOL hasUiLocation;
@property (readonly, nonatomic) BOOL hasUserModeName;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL isAutomationEnabled; // ivar: _isAutomationEnabled
@property (nonatomic) BOOL isStart; // ivar: _isStart
@property (retain, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (nonatomic) int modeType; // ivar: _modeType
@property (nonatomic) int origin; // ivar: _origin
@property (retain, nonatomic) NSString *originAnchorType; // ivar: _originAnchorType
@property (retain, nonatomic) NSString *originBundleId; // ivar: _originBundleId
@property (retain, nonatomic) NSMutableArray *serializedTriggers; // ivar: _serializedTriggers
@property (nonatomic) BOOL shouldSuggestTriggers; // ivar: _shouldSuggestTriggers
@property (nonatomic) NSUInteger uiLocation; // ivar: _uiLocation
@property (retain, nonatomic) NSString *userModeName; // ivar: _userModeName
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)modeTypeAsString:(int)arg0 ;
-(id)originAsString:(int)arg0 ;
-(id)serializedTriggersAtIndex:(NSUInteger)arg0 ;
-(int)StringAsModeType:(id)arg0 ;
-(int)StringAsOrigin:(id)arg0 ;
-(void)addSerializedTriggers:(id)arg0 ;
-(void)clearSerializedTriggers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif