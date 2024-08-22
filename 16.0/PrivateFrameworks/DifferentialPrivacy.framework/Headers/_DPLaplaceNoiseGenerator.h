// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPLAPLACENOISEGENERATOR_H
#define _DPLAPLACENOISEGENERATOR_H


#import <Foundation/Foundation.h>


@interface _DPLaplaceNoiseGenerator : NSObject

@property (readonly, nonatomic) CGFloat b; // ivar: _b


+(id)zeroMeanLaplaceNoiseGenerator:(CGFloat)arg0 ;
-(CGFloat)sample;
-(id)description;
-(id)init;
-(id)initWithScale:(CGFloat)arg0 ;


@end


#endif