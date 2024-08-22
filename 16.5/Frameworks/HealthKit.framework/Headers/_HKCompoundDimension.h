// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCOMPOUNDDIMENSION_H
#define _HKCOMPOUNDDIMENSION_H

@class HKDimension;


#import "_HKFactorization.h"

@interface _HKCompoundDimension : HKDimension {
    _HKFactorization *_baseDimensions;
}




+(id)dimensionWithBaseDimensions:(id)arg0 ;
-(id)_baseDimensions;
-(id)_initWithBaseDimensions:(id)arg0 ;


@end


#endif