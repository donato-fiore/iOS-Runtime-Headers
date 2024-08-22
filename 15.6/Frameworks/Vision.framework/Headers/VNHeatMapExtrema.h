// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNHEATMAPEXTREMA_H
#define VNHEATMAPEXTREMA_H


#import <Foundation/Foundation.h>


@interface VNHeatMapExtrema : NSObject {
    CGPoint _extrema;
    float _extremeValues;
}




-(id)init;
-(struct CGRect )computeRectFromExtremaUsingThreshold:(float)arg0 vImage:(struct vImage_Buffer )arg1 ;
-(void)updateExtrema:(float)arg0 x:(int)arg1 y:(int)arg2 ;


@end


#endif