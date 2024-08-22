// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUEMUTABLEARRAY_H
#define NSKEYVALUEMUTABLEARRAY_H

@class NSMutableArray;
@protocol NSKeyValueProxyCaching;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSKeyValueMutableArray : NSMutableArray <NSKeyValueProxyCaching>

 {
    NSObject *_container;
    NSString *_key;
}




+(id)_proxyShare;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(struct ? )_proxyLocator;
-(void)_proxyNonGCFinalize;
-(void)dealloc;
-(void)setArray:(id)arg0 ;


@end


#endif