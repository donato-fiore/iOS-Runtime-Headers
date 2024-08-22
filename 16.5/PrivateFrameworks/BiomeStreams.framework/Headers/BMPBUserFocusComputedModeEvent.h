// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBUSERFOCUSCOMPUTEDMODEEVENT_H
#define BMPBUSERFOCUSCOMPUTEDMODEEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBUserFocusComputedModeEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMode;
@property (nonatomic) BOOL hasModeSemanticType;
@property (nonatomic) BOOL hasModeUpdateReason;
@property (nonatomic) BOOL hasModeUpdateSource;
@property (readonly, nonatomic) BOOL hasSemanticModeIdentifier;
@property (nonatomic) BOOL hasStarting;
@property (retain, nonatomic) NSString *mode; // ivar: _mode
@property (nonatomic) int modeSemanticType; // ivar: _modeSemanticType
@property (nonatomic) int modeUpdateReason; // ivar: _modeUpdateReason
@property (nonatomic) int modeUpdateSource; // ivar: _modeUpdateSource
@property (retain, nonatomic) NSString *semanticModeIdentifier; // ivar: _semanticModeIdentifier
@property (nonatomic) BOOL starting; // ivar: _starting


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)modeSemanticTypeAsString:(int)arg0 ;
-(id)modeUpdateReasonAsString:(int)arg0 ;
-(id)modeUpdateSourceAsString:(int)arg0 ;
-(int)StringAsModeSemanticType:(id)arg0 ;
-(int)StringAsModeUpdateReason:(id)arg0 ;
-(int)StringAsModeUpdateSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif