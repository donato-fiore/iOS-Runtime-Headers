// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKDIRECTSCALINGPARAMS_H
#define ABPKDIRECTSCALINGPARAMS_H


#import <Foundation/Foundation.h>


@interface ABPKDirectScalingParams : NSObject

@property (readonly, nonatomic) float heightScale; // ivar: _heightScale
@property (readonly, nonatomic) float widthScale; // ivar: _widthScale


-(id)initWithInputResolution:(struct CGSize )arg0 andOutputResolution:(struct CGSize )arg1 ;


@end


#endif