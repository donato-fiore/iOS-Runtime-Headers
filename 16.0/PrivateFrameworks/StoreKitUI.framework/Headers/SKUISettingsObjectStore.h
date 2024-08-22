// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISETTINGSOBJECTSTORE_H
#define SKUISETTINGSOBJECTSTORE_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface SKUISettingsObjectStore : NSObject {
    NSMutableOrderedSet *_allObjects;
    BOOL _dirty;
    NSMutableOrderedSet *_visibleObjects;
}




-(BOOL)containsObject:(id)arg0 ;
-(BOOL)objectIsVisible:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfVisibleObject:(id)arg0 ;
-(NSUInteger)numberOfObjects;
-(NSUInteger)numberOfVisibleObjects;
-(id)allObjects;
-(id)description;
-(id)init;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)visibleObjectAtIndex:(NSUInteger)arg0 ;
-(void)_updateVisibleOrder;
-(void)addObject:(id)arg0 hidden:(BOOL)arg1 ;
-(void)enumerateObjects:(id)arg0 ;
-(void)enumerateVisibleObjects:(id)arg0 ;
-(void)hideObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;
-(void)revealObject:(id)arg0 ;


@end


#endif