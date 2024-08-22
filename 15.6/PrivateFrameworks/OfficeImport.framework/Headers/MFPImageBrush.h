// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPIMAGEBRUSH_H
#define MFPIMAGEBRUSH_H



#import "MFPBrush.h"
#import "OITSUImage.h"
#import "OITSUColor.h"

@interface MFPImageBrush : MFPBrush {
    OITSUImage *mPhoneImage;
    OITSUColor *mPhonePatternColor;
}




-(id)color;
-(id)initWithPhoneImage:(id)arg0 ;
-(void)fillPath:(id)arg0 ;


@end


#endif