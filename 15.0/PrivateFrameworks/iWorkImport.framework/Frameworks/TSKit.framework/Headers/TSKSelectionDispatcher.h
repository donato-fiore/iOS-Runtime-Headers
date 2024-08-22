// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKSELECTIONDISPATCHER_H
#define TSKSELECTIONDISPATCHER_H

@protocol TSKSelectionDispatchReceiver;

#import <Foundation/Foundation.h>


@interface TSKSelectionDispatcher : NSObject

@property (weak, nonatomic) NSObject<TSKSelectionDispatchReceiver> *selectionDispatchReceiver; // ivar: _selectionDispatchReceiver


-(id)newRootSelectionTransformerForSelectionPath:(id)arg0 ;
-(void)beginTransformingCurrentSelectionPaths;
-(void)dispatchSelectionPath:(id)arg0 withFlags:(NSUInteger)arg1 ;
-(void)endTransformingCurrentSelectionPaths;
-(void)transformCurrentSelectionPathsUsingOperationTransformer:(id)arg0 ;


@end


#endif