// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUESET_H
#define NSKEYVALUESET_H

@class NSSet;
@protocol NSKeyValueProxyCaching;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSKeyValueNonmutatingSetMethodSet.h"

@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching>

 {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}




+(id)_proxyShare;
-(NSUInteger)count;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
-(struct ? )_proxyLocator;
-(void)_proxyNonGCFinalize;
-(void)dealloc;


@end


#endif