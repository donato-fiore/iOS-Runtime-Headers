// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMWEAKREFERENCECOLLECTION_H
#define IMWEAKREFERENCECOLLECTION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IMWeakReferenceCollection : NSObject {
    NSMutableArray *_list;
}




-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)count;
-(id)init;
-(void)addObject:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif