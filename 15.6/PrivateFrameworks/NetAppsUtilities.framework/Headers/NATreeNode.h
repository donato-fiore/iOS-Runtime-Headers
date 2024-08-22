// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NATREENODE_H
#define NATREENODE_H

@class NSSet, NSString, NSEnumerator, NSMutableSet;
@protocol NSObject, NSCopying, NSMutableCopying, NAIdentifiable, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface NATreeNode : NSObject <NSObject, NSCopying, NSMutableCopying, NAIdentifiable, NSFastEnumeration>



@property (readonly, copy, nonatomic) NSSet *childNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSEnumerator *deepNodeEnumerator;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSMutableSet *internalChildNodes; // ivar: _internalChildNodes
@property (retain, nonatomic) id *representedObject; // ivar: _representedObject
@property (readonly, nonatomic) NSEnumerator *shallowNodeEnumerator;
@property (readonly, nonatomic) NSEnumerator *shallowRepresentedObjectEnumerator;
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)childAtIndexPath:(id)arg0 withChildrenSortedByComparator:(id)arg1 ;
-(id)childrenSortedByComparator:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRepresentedObject:(id)arg0 ;
-(id)initWithRepresentedObject:(id)arg0 childNodes:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif