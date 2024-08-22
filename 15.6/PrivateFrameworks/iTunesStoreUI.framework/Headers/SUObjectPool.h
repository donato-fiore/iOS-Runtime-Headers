// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUOBJECTPOOL_H
#define SUOBJECTPOOL_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SUObjectPool : NSObject {
    NSMutableDictionary *_poolObjects;
}


@property (readonly, nonatomic) NSArray *vendedObjects; // ivar: _vendedObjects


-(id)addObjectsOfClass:(Class)arg0 count:(NSInteger)arg1 forClass:(Class)arg2 ;
-(id)copyPoppedObjectForClass:(Class)arg0 ;
-(void)addObjects:(id)arg0 forClass:(Class)arg1 ;
-(void)dealloc;


@end


#endif