// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLECORRELATION_H
#define HDCODABLECORRELATION_H

@class PBCodable, NSString;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableCorrelation : PBCodable <HDDecoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (readonly) Class superclass;


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif