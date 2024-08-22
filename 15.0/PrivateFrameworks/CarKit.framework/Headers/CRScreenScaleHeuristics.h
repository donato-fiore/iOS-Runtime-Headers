// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSCREENSCALEHEURISTICS_H
#define CRSCREENSCALEHEURISTICS_H


#import <Foundation/Foundation.h>


@interface CRScreenScaleHeuristics : NSObject



+(CGFloat)getPrimaryDisplayScale:(struct CGSize )arg0 viewAreas:(id)arg1 ;
+(CGFloat)getSecondaryDisplayScale:(struct CGSize )arg0 physicalSize:(struct CGSize )arg1 ;
+(void)scaledDisplays:(id)arg0 reply:(id)arg1 ;


@end


#endif