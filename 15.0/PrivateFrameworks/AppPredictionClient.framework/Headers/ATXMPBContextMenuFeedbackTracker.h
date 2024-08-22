// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMPBCONTEXTMENUFEEDBACKTRACKER_H
#define ATXMPBCONTEXTMENUFEEDBACKTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBContextMenuFeedbackTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (retain, nonatomic) NSString *executableType; // ivar: _executableType
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (nonatomic) BOOL hasMenuActionType;
@property (readonly, nonatomic) BOOL hasSuggestion;
@property (nonatomic) int menuActionType; // ivar: _menuActionType
@property (retain, nonatomic) NSString *suggestion; // ivar: _suggestion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)menuActionTypeAsString:(int)arg0 ;
-(int)StringAsMenuActionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif