// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCACHENODESOURCEDERIVATION_H
#define NUCACHENODESOURCEDERIVATION_H

@protocol NUSourceDerivation;

#import <Foundation/Foundation.h>


@interface NUCacheNodeSourceDerivation : NSObject <NUSourceDerivation>

 {
    NSInteger _subsampleFactor;
}




-(NSInteger)orientationFromOriginal:(NSInteger)arg0 derivativeOrientation:(NSInteger)arg1 ;
-(id)init;
-(id)initWithSubsampleFactor:(NSInteger)arg0 ;
-(struct ? )scaleFromOriginalSize:(struct ? )arg0 derivativeSize:(struct ? )arg1 ;


@end


#endif