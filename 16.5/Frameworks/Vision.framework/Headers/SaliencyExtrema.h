// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALIENCYEXTREMA_H
#define SALIENCYEXTREMA_H


#import <Foundation/Foundation.h>


@interface SaliencyExtrema : NSObject {
    CGPoint _extrema;
    float _extremeValues;
}




-(id)init;
-(struct CGRect )computeRectFromExtremaUsingThreshold:(float)arg0 vImage:(struct vImage_Buffer )arg1 ;
-(void)updateExtrema:(float)arg0 x:(int)arg1 y:(int)arg2 ;


@end


#endif