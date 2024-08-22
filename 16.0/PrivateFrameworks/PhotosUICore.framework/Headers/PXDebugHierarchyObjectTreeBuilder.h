// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDEBUGHIERARCHYOBJECTTREEBUILDER_H
#define PXDEBUGHIERARCHYOBJECTTREEBUILDER_H


#import <Foundation/Foundation.h>


@interface PXDebugHierarchyObjectTreeBuilder : NSObject



+(id)buildObjectTreeForDebugHierarchyWithIdentifier:(id)arg0 provider:(id)arg1 options:(NSUInteger)arg2 ;
+(id)createObjectForElement:(id)arg0 parentObject:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif