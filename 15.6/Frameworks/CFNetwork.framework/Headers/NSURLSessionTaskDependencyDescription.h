// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSURLSESSIONTASKDEPENDENCYDESCRIPTION_H
#define NSURLSESSIONTASKDEPENDENCYDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "__NSURLSessionTaskDependencyResourceIdentifier.h"

@interface NSURLSessionTaskDependencyDescription : NSObject {
    __NSURLSessionTaskDependencyResourceIdentifier *_dependent;
    __NSURLSessionTaskDependencyResourceIdentifier *_parent;
}


@property (readonly) NSString *dependentMimeType; // ivar: _dependentMimeType
@property (readonly) NSString *dependentURLPath; // ivar: _dependentURLPath
@property (nonatomic) BOOL exclusive; // ivar: _exclusive
@property (readonly) NSString *parentMimeType; // ivar: _parentMimeType
@property (readonly) NSString *parentURLPath; // ivar: _parentURLPath
@property (nonatomic) float priority; // ivar: _priority


+(id)taskDependencyDescriptionWithMimeType:(id)arg0 parentMimeType:(id)arg1 ;
+(id)taskDependencyDescriptionWithMimeType:(id)arg0 parentURLPath:(id)arg1 ;
+(id)taskDependencyDescriptionWithParentMimeType:(id)arg0 ;
+(id)taskDependencyDescriptionWithParentURLPath:(id)arg0 ;
+(id)taskDependencyDescriptionWithURLPath:(id)arg0 parentMimeType:(id)arg1 ;
+(id)taskDependencyDescriptionWithURLPath:(id)arg0 parentURLPath:(id)arg1 ;
-(id)description;
-(void)dealloc;


@end


#endif