// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGFLOATVALUESCOLORLOOKUPCUBE_H
#define PXGFLOATVALUESCOLORLOOKUPCUBE_H

@class NSString;


#import "PXGColorLookupCube.h"

@interface PXGFloatValuesColorLookupCube : PXGColorLookupCube

@property (readonly, nonatomic) *float colorValuesData; // ivar: _colorValuesData
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger length; // ivar: _length


// +(BOOL)_parseLUTData:(id)arg0 resultHandler:(id)arg1 errorHandler:(unk)arg2  ;
-(BOOL)blendWithCube:(id)arg0 factor:(float)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldCache;
-(NSUInteger)hash;
-(id)center;
-(id)createTextureWithContext:(id)arg0 ;
-(id)init;
-(id)initWithContentsOfURL:(id)arg0 format:(NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 usedFormat:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 format:(NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithEdgeSize:(NSInteger)arg0 colorValuesData:(*float)arg1 length:(NSUInteger)arg2 identifier:(id)arg3 ;
-(id)textureData;
-(void)dealloc;
-(void)smoothWithFactor:(float)arg0 ;


@end


#endif