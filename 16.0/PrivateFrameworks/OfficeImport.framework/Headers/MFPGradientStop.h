// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPGRADIENTSTOP_H
#define MFPGRADIENTSTOP_H


#import <Foundation/Foundation.h>

#import "OITSUColor.h"

@interface MFPGradientStop : NSObject {
    OITSUColor *mColor;
    float mPosition;
}




-(float)position;
-(id)color;
-(id)initWithColor:(id)arg0 position:(float)arg1 ;


@end


#endif