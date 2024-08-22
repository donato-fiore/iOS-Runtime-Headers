// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DLABELRESOURCE_H
#define TSCH3DLABELRESOURCE_H

@protocol TSCH3DStringIndexableResource;


#import "TSCH3DResource.h"
#import "TSCH3DLabelResourceAttributes.h"

@interface TSCH3DLabelResource : TSCH3DResource <TSCH3DStringIndexableResource>

 {
    BOOL _sizeAndOffsetCalculated;
    tvec2<float> _tightSize;
    tvec2<float> _size;
    tvec2<float> _labelRenderOffset;
    tvec2<float> _bitmapLabelRenderOffset;
}


@property (copy, nonatomic) TSCH3DLabelResourceAttributes *attributes; // ivar: _attributes
@property (readonly, nonatomic) tvec2<float> bitmapLabelRenderOffset;
@property (readonly, nonatomic) tvec2<int> clampedLabelSampledSize;
@property (readonly, nonatomic) tvec2<float> labelRenderOffset;
@property (readonly, nonatomic) tvec2<float> labelSize;
@property (readonly, nonatomic) tvec2<float> tightSize;


+(id)resourceWithLabelAttributes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)get;
-(id)init;
-(id)initWithLabelAttributes:(id)arg0 ;
-(struct tvec2<int> )labelSizeWithSamples:(CGFloat)arg0 ;
-(struct tvec2<int> )p_clampedLabelSampledSizeReturningClampedRatio:(*float)arg0 ;
-(void)p_calculateSizeAndOffset;
-(void)setString:(id)arg0 ;


@end


#endif