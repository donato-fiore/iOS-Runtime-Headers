// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLENANOSYNCANCHOR_H
#define HDCODABLENANOSYNCANCHOR_H

@class PBCodable, NSString;
@protocol HDNanoSyncDescription, NSCopying;


#import "HDCodableEntityIdentifier.h"

@interface HDCodableNanoSyncAnchor : PBCodable <HDNanoSyncDescription, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger anchor; // ivar: _anchor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // ivar: _entityIdentifier
@property (nonatomic) BOOL hasAnchor;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (nonatomic) BOOL hasObjectType;
@property (readonly) NSUInteger hash;
@property (nonatomic) int objectType; // ivar: _objectType
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)nanoSyncDescription;
-(id)objectTypeAsString:(int)arg0 ;
-(int)StringAsObjectType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif