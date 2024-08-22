// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREALMWORKFLOWQUARANTINE_H
#define WFREALMWORKFLOWQUARANTINE_H

@class NSDate, NSString;


#import "RLMObject.h"
#import "RLMLinkingObjects.h"

@interface WFRealmWorkflowQuarantine : RLMObject

@property (retain) NSDate *importDate; // ivar: _importDate
@property (copy) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property (readonly) RLMLinkingObjects *workflows; // ivar: _workflows


+(id)className;
+(id)defaultPropertyValues;
+(id)linkingObjectsProperties;
+(id)requiredProperties;


@end


#endif