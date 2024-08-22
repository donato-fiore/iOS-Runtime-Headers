// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUEMUTABLEORDEREDSET_H
#define NSKEYVALUEMUTABLEORDEREDSET_H

@class NSMutableOrderedSet;
@protocol NSKeyValueProxyCaching;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSKeyValueMutableOrderedSet : NSMutableOrderedSet <NSKeyValueProxyCaching>

 {
    NSObject *_container;
    NSString *_key;
}




+(id)_proxyShare;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(struct ? )_proxyLocator;
-(void)_proxyNonGCFinalize;
-(void)dealloc;


@end


#endif