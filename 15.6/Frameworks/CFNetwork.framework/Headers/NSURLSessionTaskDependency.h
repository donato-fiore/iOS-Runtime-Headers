// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSURLSESSIONTASKDEPENDENCY_H
#define NSURLSESSIONTASKDEPENDENCY_H


#import <Foundation/Foundation.h>

#import "NSURLSessionTask.h"
#import "NSURLSessionTaskDependencyDescription.h"

@interface NSURLSessionTaskDependency : NSObject

@property (readonly, retain, nonatomic) NSURLSessionTask *mainDocumentTask; // ivar: _mainDocumentTask
@property (readonly, retain, nonatomic) NSURLSessionTask *parentTask; // ivar: _parentTask
@property (retain, nonatomic) NSURLSessionTaskDependencyDescription *taskDependencyDescription; // ivar: _taskDependencyDescription


+(id)taskDependencyWithMainDocumentTask:(id)arg0 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg0 taskDependencyDescription:(id)arg1 ;
+(id)taskDependencyWithParentTask:(id)arg0 priority:(float)arg1 exclusive:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;


@end


#endif