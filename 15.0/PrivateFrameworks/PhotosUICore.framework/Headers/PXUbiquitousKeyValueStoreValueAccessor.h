// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUBIQUITOUSKEYVALUESTOREVALUEACCESSOR_H
#define PXUBIQUITOUSKEYVALUESTOREVALUEACCESSOR_H

@class NSString, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXUbiquitousKeyValueStoreValueAccessor : NSObject {
    id *_cachedValue;
    id *_defaultValueFuture;
    id *_valueFilter;
    id *_changeHandler;
}


@property (retain) id *currentValue;
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storeQueue; // ivar: _storeQueue
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore; // ivar: _ubiquitousKeyValueStore


-(id)description;
-(id)init;
// -(id)initWithUbiquitousKeyValueStore:(id)arg0 key:(id)arg1 defaultValueFuture:(id)arg2 valueFilter:(unk)arg3 changeHandler:(id)arg4  ;
-(void)_keyValueStoreDidChangeExternally:(id)arg0 ;


@end


#endif