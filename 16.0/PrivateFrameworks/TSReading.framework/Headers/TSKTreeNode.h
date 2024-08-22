// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKTREENODE_H
#define TSKTREENODE_H

@class NSString, NSMutableArray;


#import "TSPObject.h"

@interface TSKTreeNode : TSPObject {
    NSString *mDisplayName;
    id *mObject;
    NSMutableArray *mChildren;
}


@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) id *dataObject;
@property (retain, nonatomic) NSString *name;


-(BOOL)hasChildWithName:(id)arg0 ;
-(NSInteger)indexOfNodeWithObject:(id)arg0 ;
-(id)childEnumerator;
-(id)description;
-(id)initWithContext:(id)arg0 ;
-(id)nodeAtIndex:(NSUInteger)arg0 ;
-(id)nodeWithObject:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)shallowCopy;
-(void)addChildWithName:(id)arg0 object:(id)arg1 ;
-(void)addNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)addObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enumerateAllChildrenWithBlock:(id)arg0 ;
-(void)removeAllChildren;
-(void)removeChildAtIndex:(NSUInteger)arg0 ;
-(void)removeChildWithDataObject:(id)arg0 ;
-(void)removeChildWithName:(id)arg0 ;


@end


#endif