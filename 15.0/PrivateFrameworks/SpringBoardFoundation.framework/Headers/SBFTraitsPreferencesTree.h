// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFTRAITSPREFERENCESTREE_H
#define SBFTRAITSPREFERENCESTREE_H

@class NSArray, NSString;
@protocol SBFTraitsPreferencesTree, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBFTraitsPreferencesTree : NSObject <SBFTraitsPreferencesTree, BSDescriptionProviding>

 {
    NSArray *_rootChildren;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugName; // ivar: _debugName
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFlatTree; // ivar: _isFlatTree
@property (readonly) Class superclass;
@property (nonatomic) NSInteger traversalType; // ivar: _traversalType


+(id)treeWithNodesSpecifications:(id)arg0 traversalType:(NSInteger)arg1 debugName:(id)arg2 ;
-(id)_initWithRootChildren:(id)arg0 traversalType:(NSInteger)arg1 debugName:(id)arg2 ;
-(id)_recursiveDescriptionWithChildrenInZOrder:(BOOL)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)participantsTopologicalSort;
-(id)recursiveDescription;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)topologicalSort;


@end


#endif