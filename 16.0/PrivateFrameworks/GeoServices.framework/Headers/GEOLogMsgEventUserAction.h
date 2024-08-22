// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTUSERACTION_H
#define GEOLOGMSGEVENTUSERACTION_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOLogMsgEventUserActionModuleInfo.h"

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_actionRichProviderId;
    GEOLogMsgEventUserActionModuleInfo *_moduleInfo;
    NSString *_userActionEventKey;
    NSString *_userActionEventValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _buttonType;
    int _userActionEventAction;
    int _userActionEventTarget;
    ? _flags;
}


@property (retain, nonatomic) NSString *actionRichProviderId;
@property (nonatomic) int buttonType;
@property (readonly, nonatomic) BOOL hasActionRichProviderId;
@property (nonatomic) BOOL hasButtonType;
@property (readonly, nonatomic) BOOL hasModuleInfo;
@property (nonatomic) BOOL hasUserActionEventAction;
@property (readonly, nonatomic) BOOL hasUserActionEventKey;
@property (nonatomic) BOOL hasUserActionEventTarget;
@property (readonly, nonatomic) BOOL hasUserActionEventValue;
@property (retain, nonatomic) GEOLogMsgEventUserActionModuleInfo *moduleInfo;
@property (nonatomic) int userActionEventAction;
@property (retain, nonatomic) NSString *userActionEventKey;
@property (nonatomic) int userActionEventTarget;
@property (retain, nonatomic) NSString *userActionEventValue;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)buttonTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)userActionEventActionAsString:(int)arg0 ;
-(id)userActionEventTargetAsString:(int)arg0 ;
-(int)StringAsButtonType:(id)arg0 ;
-(int)StringAsUserActionEventAction:(id)arg0 ;
-(int)StringAsUserActionEventTarget:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif