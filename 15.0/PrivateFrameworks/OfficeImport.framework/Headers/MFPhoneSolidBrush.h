// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPHONESOLIDBRUSH_H
#define MFPHONESOLIDBRUSH_H



#import "MFPhoneBrush.h"
#import "OITSUColor.h"

@interface MFPhoneSolidBrush : MFPhoneBrush {
    OITSUColor *m_colour;
}




+(id)solidBrushWithColour:(id)arg0 ;
-(id)initWithColour:(id)arg0 ;
-(void)fillPath:(id)arg0 in_path:(id)arg1 ;


@end


#endif