// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCOMPONENTSYSTEM_H
#define GKCOMPONENTSYSTEM_H

@class NSMutableArray, NSArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface GKComponentSystem : NSObject <NSFastEnumeration>

 {
    NSMutableArray *_components;
}


@property (readonly, nonatomic) Class componentClass; // ivar: _componentClass
@property (readonly, retain, nonatomic) NSArray *components;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(Class)classForGenericArgumentAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithComponentClass:(Class)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)performSelector:(SEL)arg0 withObject:(id)arg1 ;
-(void)addComponent:(id)arg0 ;
-(void)addComponentWithEntity:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)removeComponent:(id)arg0 ;
-(void)removeComponentWithEntity:(id)arg0 ;
-(void)updateWithDeltaTime:(CGFloat)arg0 ;


@end


#endif