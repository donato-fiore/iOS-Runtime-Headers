// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWTYPE_H
#define WFWORKFLOWTYPE_H

@class NSString;


#import "RLMObject.h"

@interface WFWorkflowType : RLMObject

@property (copy) NSString *type; // ivar: _type


+(id)primaryKey;
+(id)requiredProperties;


@end


#endif