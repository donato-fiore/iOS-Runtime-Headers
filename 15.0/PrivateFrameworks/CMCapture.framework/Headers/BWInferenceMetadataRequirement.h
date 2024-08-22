// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCEMETADATAREQUIREMENT_H
#define BWINFERENCEMETADATAREQUIREMENT_H

@class NSArray;
@protocol NSCopying;


#import "BWInferenceDataRequirement.h"

@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement <NSCopying>



@property (readonly, nonatomic) short mappingOption; // ivar: _mappingOption
@property (readonly, copy, nonatomic) NSArray *metadataKeys; // ivar: _metadataKeys


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMetadataKeys:(id)arg0 ;
-(id)initWithMetadataKeys:(id)arg0 mappingOption:(short)arg1 ;
-(id)initWithMetadataRequirement:(id)arg0 ;
-(void)dealloc;


@end


#endif