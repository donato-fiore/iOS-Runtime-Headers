// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPSOLIDBRUSH_H
#define MFPSOLIDBRUSH_H



#import "MFPBrush.h"
#import "OITSUColor.h"

@interface MFPSolidBrush : MFPBrush {
    OITSUColor *mColor;
}




-(id)color;
-(id)initWithColor:(id)arg0 ;
-(void)fillPath:(id)arg0 ;
-(void)setColor:(id)arg0 ;


@end


#endif