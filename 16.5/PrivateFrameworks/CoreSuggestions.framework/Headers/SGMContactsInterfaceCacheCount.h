// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMCONTACTSINTERFACECACHECOUNT_H
#define SGMCONTACTSINTERFACECACHECOUNT_H

@class PETDistributionEventTracker;

#import <Foundation/Foundation.h>


@interface SGMContactsInterfaceCacheCount : NSObject

@property (readonly, nonatomic) PETDistributionEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(CGFloat)arg0 ;


@end


#endif