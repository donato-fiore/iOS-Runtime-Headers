// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPAPPLOCATION_H
#define CLPAPPLOCATION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CLPLocation.h"

@interface CLPAppLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat age; // ivar: _age
@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) int appState; // ivar: _appState
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasLoiType;
@property (nonatomic) BOOL hasRoutineMode;
@property (nonatomic) BOOL hasServerHash;
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (nonatomic) int loiType; // ivar: _loiType
@property (nonatomic) int routineMode; // ivar: _routineMode
@property (nonatomic) int serverHash; // ivar: _serverHash


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