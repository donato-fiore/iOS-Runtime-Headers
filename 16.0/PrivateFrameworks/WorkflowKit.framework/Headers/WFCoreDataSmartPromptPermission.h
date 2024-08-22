// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOREDATASMARTPROMPTPERMISSION_H
#define WFCOREDATASMARTPROMPTPERMISSION_H

@class NSManagedObject, NSString, NSData;


#import "WFCoreDataWorkflow.h"

@interface WFCoreDataSmartPromptPermission : NSManagedObject

@property (copy, nonatomic) NSString *actionUUID;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;


+(id)fetchRequest;


@end


#endif