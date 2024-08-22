// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPHONEREGION_H
#define MFPHONEREGION_H



#import "MFRegion.h"
#import "OITSUBezierPath.h"

@interface MFPhoneRegion : MFRegion {
    OITSUBezierPath *m_path;
    CGRect m_bounds;
}




-(id)initWithPath:(id)arg0 in_bounds:(struct CGRect )arg1 ;
-(id)initWithRects:(id)arg0 in_bounds:(struct CGRect )arg1 in_dc:(id)arg2 ;
-(id)pathForClippingWithDeviceContext:(id)arg0 ;
-(int)fill:(id)arg0 in_brush:(id)arg1 ;
-(int)frame:(id)arg0 in_brush:(id)arg1 ;
-(int)invert:(id)arg0 ;


@end


#endif