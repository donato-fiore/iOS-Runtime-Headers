// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWVISITOR_H
#define _UIVIEWVISITOR_H


#import <Foundation/Foundation.h>


@interface _UIViewVisitor : NSObject

@property (nonatomic) BOOL _currentlyVisitingHierarchy; // ivar: __currentlyVisitingHierarchy
@property (nonatomic) BOOL tracksHierarchy; // ivar: _tracksHierarchy
@property (readonly, nonatomic) NSUInteger traversalDirection; // ivar: _traversalDirection
@property (nonatomic) BOOL visitMaskViews; // ivar: _visitMaskViews


+(void)_addHierarchyTrackingVisitor:(id)arg0 ;
+(void)_removeHierarchyTrackingVisitor:(id)arg0 ;
+(void)_startTraversalOfVisitor:(id)arg0 withView:(id)arg1 ;
-(BOOL)_prepareVisitor:(id)arg0 toVisitView:(id)arg1 changedSubview:(id)arg2 previousWindow:(id)arg3 previousSuperview:(id)arg4 ;
-(BOOL)_visitView:(id)arg0 ;
-(id)initWithTraversalDirection:(NSUInteger)arg0 ;


@end


#endif