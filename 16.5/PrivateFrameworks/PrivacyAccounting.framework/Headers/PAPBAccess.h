// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAPBACCESS_H
#define PAPBACCESS_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;


#import "PAPBApplication.h"

@interface PAPBAccess : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) PAPBApplication *accessor; // ivar: _accessor
@property (retain, nonatomic) NSMutableArray *assetIdentifiers; // ivar: _assetIdentifiers
@property (readonly, nonatomic) BOOL hasAccessor;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) BOOL hasTimestampAdjustment;
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (nonatomic) int kind; // ivar: _kind
@property (nonatomic) CGFloat timestampAdjustment; // ivar: _timestampAdjustment


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif