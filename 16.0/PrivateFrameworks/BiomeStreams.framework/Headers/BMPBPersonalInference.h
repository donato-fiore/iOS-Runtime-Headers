// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBPERSONALINFERENCE_H
#define BMPBPERSONALINFERENCE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "BMPBPersonalFact.h"

@interface BMPBPersonalInference : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) BMPBPersonalFact *fact; // ivar: _fact
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasFact;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) unsigned int modelVersion; // ivar: _modelVersion
@property (retain, nonatomic) NSMutableArray *qualifiers; // ivar: _qualifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)qualifiersAtIndex:(NSUInteger)arg0 ;
-(void)addQualifiers:(id)arg0 ;
-(void)clearQualifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif