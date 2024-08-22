// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPRTVISIT_H
#define CLPRTVISIT_H

@class PBCodable;
@protocol NSCopying;



@interface CLPRTVisit : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat entryTime; // ivar: _entryTime
@property (nonatomic) CGFloat exitTime; // ivar: _exitTime
@property (nonatomic) BOOL hasEntryTime;
@property (nonatomic) BOOL hasExitTime;


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