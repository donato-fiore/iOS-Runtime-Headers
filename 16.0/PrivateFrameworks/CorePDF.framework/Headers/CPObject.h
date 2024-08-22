// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPOBJECT_H
#define CPOBJECT_H

@class NSMutableArray;
@protocol NSCopying, CPCopying;

#import <Foundation/Foundation.h>

#import "CPObject.h"
#import "CPDocument.h"
#import "CPPage.h"

@interface CPObject : NSObject <NSCopying, CPCopying>

 {
    CPObject *parent;
    NSMutableArray *children;
    CPDocument *document;
    CPPage *page;
    NSInteger zOrder;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)zOrder;
-(NSUInteger)indexOf:(id)arg0 ;
-(id)ancestorOfClass:(Class)arg0 ;
-(id)childAtIndex:(unsigned int)arg0 ;
-(id)children;
-(id)childrenNotOfClass:(Class)arg0 ;
-(id)childrenOfClass:(Class)arg0 ;
-(id)copyAndSplitChildrenAtIndex:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutChildren;
-(id)descendantsOfClass:(Class)arg0 ;
-(id)descendantsOfClass:(Class)arg0 deep:(BOOL)arg1 ;
-(id)descendantsOfClass:(Class)arg0 omitTraversing:(Class)arg1 ;
-(id)document;
-(id)firstChild;
-(id)firstDescendantOfClass:(Class)arg0 ;
-(id)firstDescendantsOfClass:(Class)arg0 ;
-(id)firstSibling;
-(id)init;
-(id)initSuper;
-(id)lastChild;
-(id)lastDescendantOfClass:(Class)arg0 ;
-(id)lastSibling;
-(id)newTakeChildren;
-(id)newTakeChildrenAmong:(id)arg0 ;
-(id)nextSibling;
-(id)page;
-(id)parent;
-(id)previousSibling;
-(id)shallowDescendantsOfClass:(Class)arg0 ;
-(int)depth;
-(unsigned int)count;
-(unsigned int)countOfClass:(Class)arg0 ;
-(unsigned int)countOfFirstDescendantsOfClass:(Class)arg0 ;
-(void)_printWithIndent:(int)arg0 ;
-(void)accept:(id)arg0 ;
-(void)add:(id)arg0 ;
-(void)add:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)addChildren:(id)arg0 ;
-(void)addChildrenOf:(id)arg0 ;
-(void)childrenOfClass:(Class)arg0 into:(id)arg1 ;
-(void)clearCachedInfo;
-(void)commonMapFuncCall:(SEL)arg0 target:(id)arg1 childrenOfClass:(Class)arg2 ofCount:(int)arg3 ;
-(void)dealloc;
-(void)descendantsOfClass:(Class)arg0 to:(id)arg1 ;
-(void)disposeDescendants;
-(void)map:(SEL)arg0 target:(id)arg1 ;
-(void)map:(SEL)arg0 target:(id)arg1 childrenOfClass:(Class)arg2 ;
-(void)map:(SEL)arg0 target:(id)arg1 childrenOfClass:(Class)arg2 last:(BOOL)arg3 ;
-(void)map:(SEL)arg0 target:(id)arg1 last:(BOOL)arg2 ;
-(void)mapSafely:(SEL)arg0 target:(id)arg1 childrenOfClass:(Class)arg2 ;
-(void)performSelector:(SEL)arg0 ;
-(void)print;
-(void)promoteChildren;
-(void)recomputeZOrder;
-(void)remove;
-(void)remove:(id)arg0 ;
-(void)removeAll;
-(void)removeFirstChild;
-(void)removeLastChild;
-(void)removeObjectAtIndex:(unsigned int)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)setPage:(id)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)setZOrder:(NSInteger)arg0 ;
-(void)updateZOrder:(NSInteger)arg0 ;


@end


#endif