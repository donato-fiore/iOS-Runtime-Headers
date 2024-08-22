// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMEFFECTFILTERMANAGER_H
#define CAMEFFECTFILTERMANAGER_H


#import <Foundation/Foundation.h>


@interface CAMEffectFilterManager : NSObject



+(id)aggdNameForType:(NSInteger)arg0 ;
+(id)ciFilterNameForFilterType:(NSInteger)arg0 ;
+(id)ciFilterNameForFilterType:(NSInteger)arg0 lightingType:(NSInteger)arg1 ;
+(id)displayNameForType:(NSInteger)arg0 ;
+(id)filtersForFilterType:(NSInteger)arg0 lightingType:(NSInteger)arg1 applyDepthEffect:(BOOL)arg2 ;


@end


#endif