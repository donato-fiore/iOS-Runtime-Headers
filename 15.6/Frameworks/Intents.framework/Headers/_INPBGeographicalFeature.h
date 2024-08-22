// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBGEOGRAPHICALFEATURE_H
#define _INPBGEOGRAPHICALFEATURE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBGeographicalFeature, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBGeographicalFeature : PBCodable <_INPBGeographicalFeature, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *geographicalFeatureDescriptors; // ivar: _geographicalFeatureDescriptors
@property (readonly, nonatomic) NSUInteger geographicalFeatureDescriptorsCount;
@property (retain, nonatomic) _INPBString *geographicalFeatureType; // ivar: _geographicalFeatureType
@property (readonly, nonatomic) BOOL hasGeographicalFeatureType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)geographicalFeatureDescriptorsAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addGeographicalFeatureDescriptors:(id)arg0 ;
-(void)clearGeographicalFeatureDescriptors;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif