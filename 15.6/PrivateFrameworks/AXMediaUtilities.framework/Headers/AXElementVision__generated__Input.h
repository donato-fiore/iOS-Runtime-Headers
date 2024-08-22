// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXELEMENTVISION__GENERATED__INPUT_H
#define AXELEMENTVISION__GENERATED__INPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface AXElementVision__generated__Input : NSObject <MLFeatureProvider>



@property (nonatomic) CGFloat confidenceThreshold; // ivar: _confidenceThreshold
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) *__CVBuffer image; // ivar: _image
@property (nonatomic) CGFloat iouThreshold; // ivar: _iouThreshold


-(id)featureValueForName:(id)arg0 ;
-(id)initWithImage:(struct __CVBuffer *)arg0 iouThreshold:(CGFloat)arg1 confidenceThreshold:(CGFloat)arg2 ;


@end


#endif