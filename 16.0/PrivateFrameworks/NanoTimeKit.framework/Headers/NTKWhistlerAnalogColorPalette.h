// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKWHISTLERANALOGCOLORPALETTE_H
#define NTKWHISTLERANALOGCOLORPALETTE_H

@class CLKDevice;

#import <Foundation/Foundation.h>


@interface NTKWhistlerAnalogColorPalette : NSObject {
    CLKDevice *_device;
}




-(id)bezelTextColorForColorPalette:(id)arg0 ;
-(id)complicationForegroundColorPalette:(id)arg0 ;
-(id)dialFillColorForColorPalette:(id)arg0 ;
-(id)handFillColorForColorPalette:(id)arg0 ;
-(id)handStrokeColorForColorPalette:(id)arg0 ;
-(id)hourTicksColorForColorPalette:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)minuteTicksColorForColorPalette:(id)arg0 ;
-(id)platterTextColorForColorPalette:(id)arg0 ;
-(id)secondHandColorForColorPalette:(id)arg0 ;


@end


#endif