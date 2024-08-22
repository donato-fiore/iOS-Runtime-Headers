// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSURLSESSIONTASKDEPENDENCYTREE_H
#define NSURLSESSIONTASKDEPENDENCYTREE_H

@class NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "__NSCFURLSessionTaskDependencyTreeNode.h"

@interface NSURLSessionTaskDependencyTree : NSObject {
    NSMutableDictionary *_dependencies;
    __NSCFURLSessionTaskDependencyTreeNode *_effectiveTree;
}


@property (retain, nonatomic) NSURL *mainDocumentURL; // ivar: _mainDocumentURL


+(id)dependencyTreeDefaultWeb;
+(id)dependencyTreeWithJSONData:(id)arg0 error:(*id)arg1 ;
+(id)dependencyTreeWithMainDocumentURL:(id)arg0 dependencyDescriptions:(id)arg1 ;
-(void)dealloc;


@end


#endif