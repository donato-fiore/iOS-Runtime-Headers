// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXGLOBALAPPMODEAFFINITYPRIOR_H
#define ATXGLOBALAPPMODEAFFINITYPRIOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXGlobalAppModeAffinityPrior : NSObject

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) CGFloat prior; // ivar: _prior


-(id)initWithMode:(NSUInteger)arg0 prior:(CGFloat)arg1 bundleId:(id)arg2 ;


@end


#endif