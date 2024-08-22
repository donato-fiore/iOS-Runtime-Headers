// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPBDISPOSITION_H
#define TPPBDISPOSITION_H

@class PBCodable;
@protocol NSCopying;


#import "TPPBAncientEpoch.h"
#import "TPPBDispositionDisallowedMachineID.h"
#import "TPPBDispositionDuplicateMachineID.h"
#import "TPPBPolicyProhibits.h"
#import "TPPBUnknownMachineID.h"

@interface TPPBDisposition : PBCodable <NSCopying>



@property (retain, nonatomic) TPPBAncientEpoch *ancientEpoch; // ivar: _ancientEpoch
@property (retain, nonatomic) TPPBDispositionDisallowedMachineID *disallowedMachineID; // ivar: _disallowedMachineID
@property (retain, nonatomic) TPPBDispositionDuplicateMachineID *duplicateMachineID; // ivar: _duplicateMachineID
@property (readonly, nonatomic) BOOL hasAncientEpoch;
@property (readonly, nonatomic) BOOL hasDisallowedMachineID;
@property (readonly, nonatomic) BOOL hasDuplicateMachineID;
@property (readonly, nonatomic) BOOL hasPolicyProhibits;
@property (readonly, nonatomic) BOOL hasUnknownMachineID;
@property (retain, nonatomic) TPPBPolicyProhibits *policyProhibits; // ivar: _policyProhibits
@property (retain, nonatomic) TPPBUnknownMachineID *unknownMachineID; // ivar: _unknownMachineID


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