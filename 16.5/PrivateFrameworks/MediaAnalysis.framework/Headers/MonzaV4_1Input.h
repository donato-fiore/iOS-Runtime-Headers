// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MONZAV4_1INPUT_H
#define MONZAV4_1INPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface MonzaV4_1Input : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) *__CVBuffer inputImage; // ivar: _inputImage


-(id)featureValueForName:(id)arg0 ;
-(id)initWithInputImage:(struct __CVBuffer *)arg0 ;
-(id)initWithInputImageAtURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithInputImageFromCGImage:(struct CGImage *)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif