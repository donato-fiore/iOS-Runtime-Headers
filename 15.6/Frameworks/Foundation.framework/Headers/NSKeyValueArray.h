// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKEYVALUEARRAY_H
#define NSKEYVALUEARRAY_H

@class NSArray;
@protocol NSKeyValueProxyCaching;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSKeyValueNonmutatingArrayMethodSet.h"

@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching>

 {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingArrayMethodSet *_methods;
}




+(id)_proxyShare;
-(NSUInteger)count;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(struct ? )_proxyLocator;
-(void)_proxyNonGCFinalize;
-(void)dealloc;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif