// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NACLISTENINGMODESMESSAGE_H
#define NACLISTENINGMODESMESSAGE_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface NACListeningModesMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *availableListeningModes; // ivar: _availableListeningModes
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSString *currentListeningMode; // ivar: _currentListeningMode
@property (retain, nonatomic) NSData *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasCurrentListeningMode;
@property (readonly, nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier


+(Class)availableListeningModeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)availableListeningModeAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAvailableListeningMode:(id)arg0 ;
-(void)clearAvailableListeningModes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif