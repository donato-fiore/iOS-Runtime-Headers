// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOREDATAACCESSRESOURCEPERMISSION_H
#define WFCOREDATAACCESSRESOURCEPERMISSION_H

@class NSManagedObject, NSData, NSString;


#import "WFCoreDataWorkflow.h"

@interface WFCoreDataAccessResourcePermission : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;


+(id)fetchRequest;


@end


#endif