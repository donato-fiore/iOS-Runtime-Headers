// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPBLENDSTOP_H
#define MFPBLENDSTOP_H


#import <Foundation/Foundation.h>


@interface MFPBlendStop : NSObject {
    float mFactor;
    float mPosition;
}




-(float)factor;
-(float)position;
-(id)initWithFactor:(float)arg0 position:(float)arg1 ;


@end


#endif