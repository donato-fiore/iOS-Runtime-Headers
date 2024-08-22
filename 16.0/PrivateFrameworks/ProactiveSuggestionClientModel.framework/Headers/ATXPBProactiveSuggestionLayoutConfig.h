// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBPROACTIVESUGGESTIONLAYOUTCONFIG_H
#define ATXPBPROACTIVESUGGESTIONLAYOUTCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface ATXPBProactiveSuggestionLayoutConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int applicableLayoutType; // ivar: _applicableLayoutType
@property (nonatomic) BOOL hasApplicableLayoutType;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applicableLayoutTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsApplicableLayoutType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif