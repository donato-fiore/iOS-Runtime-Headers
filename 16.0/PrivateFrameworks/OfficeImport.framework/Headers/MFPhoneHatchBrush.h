// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPHONEHATCHBRUSH_H
#define MFPHONEHATCHBRUSH_H



#import "MFPhoneBrush.h"
#import "OITSUColor.h"

@interface MFPhoneHatchBrush : MFPhoneBrush {
    OITSUColor *m_colour;
    int m_style;
}




+(id)hatchBrushWithColour:(id)arg0 in_style:(int)arg1 ;
+(id)patternNameForHatchStyle:(int)arg0 ;
-(id)initWithColour:(id)arg0 in_style:(int)arg1 ;
-(void)fillPath:(id)arg0 in_path:(id)arg1 ;


@end


#endif