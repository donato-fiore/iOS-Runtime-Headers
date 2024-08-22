// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFURLSESSIONTASKDEPENDENCYTREENODE_H
#define __NSCFURLSESSIONTASKDEPENDENCYTREENODE_H

@class NSMutableArray, NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSURLSessionTaskDependencyDescription.h"

@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject {
    NSURLSessionTaskDependencyDescription *dependencyDescription;
    NSMutableArray *children;
    NSMutableArray *childrenResourceIdentifiers;
    NSNumber *rootParentStreamID;
    NSMutableDictionary *_dependentToParentStreamIDs;
    NSMutableDictionary *_parentToParentStreamIDs;
}




-(id)init;
-(void)dealloc;


@end


#endif