// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOREDATATRUSTEDDOMAIN_H
#define WFCOREDATATRUSTEDDOMAIN_H

@class NSManagedObject, NSString;


#import "WFCoreDataWorkflow.h"

@interface WFCoreDataTrustedDomain : NSManagedObject

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;


+(id)fetchRequest;


@end


#endif