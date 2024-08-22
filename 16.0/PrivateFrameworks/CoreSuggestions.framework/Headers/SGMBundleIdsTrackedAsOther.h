// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMBUNDLEIDSTRACKEDASOTHER_H
#define SGMBUNDLEIDSTRACKEDASOTHER_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMBundleIdsTrackedAsOther : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 bundleId:(id)arg1 ;


@end


#endif