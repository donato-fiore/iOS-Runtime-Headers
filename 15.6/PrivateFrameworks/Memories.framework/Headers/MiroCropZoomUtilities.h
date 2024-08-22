// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROCROPZOOMUTILITIES_H
#define MIROCROPZOOMUTILITIES_H


#import <Foundation/Foundation.h>


@interface MiroCropZoomUtilities : NSObject



-(BOOL)hasCompletedAnalysis:(id)arg0 ;
-(struct CGRect )adjustKBRect:(struct CGRect )arg0 toContainRect:(struct CGRect )arg1 withinImageSize:(struct CGSize )arg2 ;
-(struct CGRect )clampImageRect:(struct CGRect )arg0 toImageSize:(struct CGSize )arg1 ;
-(struct CGRect )horizontallyClampedImageRect:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 ;
-(struct CGRect )rectFromDesiredPosition:(struct ? )arg0 outputAspectRatio:(float)arg1 image:(id)arg2 ;
-(struct CGRect )verticallyClampedImageRect:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 ;


@end


#endif