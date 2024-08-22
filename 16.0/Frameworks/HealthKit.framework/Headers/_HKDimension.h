// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKDIMENSION_H
#define _HKDIMENSION_H


#import <Foundation/Foundation.h>

#import "_HKFactorization.h"

@interface _HKDimension : NSObject {
    _HKFactorization *_reduction;
    os_unfair_lock_s _reductionLock;
}




+(id)dimensionFromString:(id)arg0 ;
-(id)_baseDimensions;
-(id)description;
-(id)init;
-(id)reduction;


@end


#endif