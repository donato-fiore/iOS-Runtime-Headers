// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUDEFAULTSOURCEDERIVATION_H
#define NUDEFAULTSOURCEDERIVATION_H

@protocol NUSourceDerivation;

#import <Foundation/Foundation.h>


@interface NUDefaultSourceDerivation : NSObject <NUSourceDerivation>





-(NSInteger)orientationFromOriginal:(NSInteger)arg0 derivativeOrientation:(NSInteger)arg1 ;
-(struct ? )scaleFromOriginalSize:(struct ? )arg0 derivativeSize:(struct ? )arg1 ;


@end


#endif