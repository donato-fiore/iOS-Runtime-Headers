// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTOBJECTSTORE_H
#define BLTOBJECTSTORE_H

@class NSString;
@protocol BLTObjectCacheDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTObjectStore : NSObject <BLTObjectCacheDelegate>

 {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    Class _elementClass;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPath:(id)arg0 elementClass:(Class)arg1 ;
-(void)objectCache:(id)arg0 keysWithBlock:(id)arg1 ;
-(void)objectCache:(id)arg0 objectForKey:(id)arg1 withBlock:(id)arg2 ;
-(void)objectCache:(id)arg0 removeObjectForKey:(id)arg1 withBlock:(id)arg2 ;
-(void)objectCache:(id)arg0 storeObject:(id)arg1 withKey:(id)arg2 withBlock:(id)arg3 ;


@end


#endif