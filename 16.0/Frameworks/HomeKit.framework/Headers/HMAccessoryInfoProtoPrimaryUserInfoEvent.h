// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYINFOPROTOPRIMARYUSERINFOEVENT_H
#define HMACCESSORYINFOPROTOPRIMARYUSERINFOEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMAccessoryInfoProtoPrimaryUserInfoEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSelectionType;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (nonatomic) int selectionType; // ivar: _selectionType
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)selectionTypeAsString:(int)arg0 ;
-(int)StringAsSelectionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif