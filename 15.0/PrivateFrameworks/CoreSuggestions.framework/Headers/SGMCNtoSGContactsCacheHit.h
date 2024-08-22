// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMCNTOSGCONTACTSCACHEHIT_H
#define SGMCNTOSGCONTACTSCACHEHIT_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMCNtoSGContactsCacheHit : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 cacheHit:(struct SGMTypeSafeBool_ )arg1 ;


@end


#endif