// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLOBJECTCONTAINER_H
#define MDLOBJECTCONTAINER_H

@class NSMutableArray, NSString, NSArray;
@protocol MDLObjectContainerComponent;

#import <Foundation/Foundation.h>


@interface MDLObjectContainer : NSObject <MDLObjectContainerComponent>

 {
    NSMutableArray *_objects;
}


@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSArray *objects;
@property (readonly) Class superclass;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)init;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif