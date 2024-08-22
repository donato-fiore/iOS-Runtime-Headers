// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOMPOSITIONFINALIZERRESULT_H
#define PICOMPOSITIONFINALIZERRESULT_H

@class NUComposition;

#import <Foundation/Foundation.h>


@interface PICompositionFinalizerResult : NSObject

@property (readonly, copy) NUComposition *composition; // ivar: _composition
@property (readonly) NSInteger disposition; // ivar: _disposition


-(id)initWithDisposition:(NSInteger)arg0 composition:(id)arg1 ;


@end


#endif