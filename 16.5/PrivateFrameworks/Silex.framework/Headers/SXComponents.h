// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTS_H
#define SXCOMPONENTS_H

@class NSArray, NSMutableDictionary, NSMutableArray;
@protocol NSCopying, NSMutableCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface SXComponents : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>



@property (readonly, nonatomic) NSArray *allComponents;
@property (readonly, nonatomic) NSMutableDictionary *childComponentsByParentIdentifier; // ivar: _childComponentsByParentIdentifier
@property (readonly, nonatomic) NSMutableArray *components; // ivar: _components
@property (readonly, nonatomic) NSMutableDictionary *componentsByIdentifier; // ivar: _componentsByIdentifier
@property (readonly, nonatomic) NSUInteger count;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfComponent:(id)arg0 ;
-(id)componentAtIndex:(NSUInteger)arg0 ;
-(id)componentForIdentifier:(id)arg0 ;
-(id)componentsForContainerComponentWithIdentifier:(id)arg0 ;
-(id)componentsForContainerComponentWithPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_removeComponent:(id)arg0 ;
-(void)addComponent:(id)arg0 ;
-(void)addComponentsFromArray:(id)arg0 ;
-(void)enumerateComponentsWithBlock:(id)arg0 ;
-(void)insertComponent:(id)arg0 afterComponent:(id)arg1 ;
-(void)insertComponent:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAllComponents;
-(void)removeComponentAtIndex:(NSUInteger)arg0 ;
-(void)removeComponentWithIdentifier:(id)arg0 ;
-(void)replaceComponent:(id)arg0 withComponent:(id)arg1 ;
-(void)replaceComponentAtIndex:(NSUInteger)arg0 withComponent:(id)arg1 ;


@end


#endif