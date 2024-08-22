// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISELECTORDICTIONARY_H
#define _UISELECTORDICTIONARY_H

@class NSMapTable, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UISelectorSet.h"

@interface _UISelectorDictionary : NSObject <NSCopying>

 {
    NSMapTable *_map;
}


@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) _UISelectorSet *allSelectors;
@property (readonly, nonatomic) NSUInteger count;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMap:(id)arg0 ;
// -(id)initWithMapping:(id)arg0 objects:(unk)arg1  ;
-(id)objectForSelector:(SEL)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)enumerateSelectorsAndObjectsUsingBlock:(id)arg0 ;
-(void)removeObjectForSelector:(SEL)arg0 ;
-(void)removeObjectsForSelectors:(id)arg0 ;
-(void)setObject:(id)arg0 forSelector:(SEL)arg1 ;


@end


#endif