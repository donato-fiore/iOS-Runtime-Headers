// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCACHINGVIBRANCYTRANSITIONPROVIDER_H
#define CSCACHINGVIBRANCYTRANSITIONPROVIDER_H

@class BSUIVibrancyLUT;

#import <Foundation/Foundation.h>


@interface CSCachingVibrancyTransitionProvider : NSObject

@property (copy, nonatomic) BSUIVibrancyLUT *cachedVibrancyLUT; // ivar: _cachedVibrancyLUT


-(id)vibrancyLUTWithStartingLUT:(id)arg0 transitionProgress:(CGFloat)arg1 toIdentifier:(id)arg2 ;


@end


#endif