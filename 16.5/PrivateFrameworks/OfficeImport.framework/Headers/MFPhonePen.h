// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPHONEPEN_H
#define MFPHONEPEN_H



#import "MFPen.h"

@interface MFPhonePen : MFPen {
    float m_PixelSize;
}




+(id)penWithStyle:(int)arg0 width:(int)arg1 colour:(id)arg2 styleArray:(*CGFloat)arg3 LPToDPTransform:(struct CGAffineTransform )arg4 ;
-(id)initWithStyle:(int)arg0 width:(int)arg1 colour:(id)arg2 styleArray:(*CGFloat)arg3 ;
-(void)applyDashedLinesToPath:(id)arg0 ;
-(void)applyLineCapStyleToPath:(id)arg0 ;
-(void)applyLineJoinStyleToPath:(id)arg0 in_path:(id)arg1 ;
-(void)strokePath:(id)arg0 in_path:(id)arg1 ;


@end


#endif