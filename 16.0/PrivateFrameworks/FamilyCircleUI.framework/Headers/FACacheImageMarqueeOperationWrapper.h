// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FACACHEIMAGEMARQUEEOPERATIONWRAPPER_H
#define FACACHEIMAGEMARQUEEOPERATIONWRAPPER_H


#import <Foundation/Foundation.h>

#import "FACacheImageMarqueeOperation.h"

@interface FACacheImageMarqueeOperationWrapper : NSObject

@property (retain, nonatomic) FACacheImageMarqueeOperation *cacheImageOperation; // ivar: _cacheImageOperation


-(id)initWithFamilyCircle:(id)arg0 ;
-(void)createAndCacheData;


@end


#endif