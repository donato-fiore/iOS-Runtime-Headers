// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECSFAACTION_H
#define SECSFAACTION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SECSFAActionAutomaticBugCapture.h"
#import "SECSFAActionDropEvent.h"
#import "SECSFAActionTapToRadar.h"

@interface SECSFAAction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SECSFAActionAutomaticBugCapture *abc; // ivar: _abc
@property (nonatomic) int action; // ivar: _action
@property (retain, nonatomic) SECSFAActionDropEvent *drop; // ivar: _drop
@property (readonly, nonatomic) BOOL hasAbc;
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasDrop;
@property (readonly, nonatomic) BOOL hasRadarnumber;
@property (readonly, nonatomic) BOOL hasTtr;
@property (retain, nonatomic) NSString *radarnumber; // ivar: _radarnumber
@property (retain, nonatomic) SECSFAActionTapToRadar *ttr; // ivar: _ttr


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAction:(id)arg0 ;
-(void)clearOneofValuesForAction;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif