// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPHONEPATTERNBRUSH_H
#define MFPHONEPATTERNBRUSH_H



#import "MFPhoneBrush.h"
#import "MFPhoneBitmap.h"

@interface MFPhonePatternBrush : MFPhoneBrush {
    MFPhoneBitmap *m_pattern;
    BOOL m_usePaletteForBilevel;
}




+(id)patternBrushWithBitmap:(id)arg0 usePaletteForBilevel:(BOOL)arg1 ;
-(id)initWithBitmap:(id)arg0 usePaletteForBilevel:(BOOL)arg1 ;
-(void)fillPath:(id)arg0 in_path:(id)arg1 ;


@end


#endif