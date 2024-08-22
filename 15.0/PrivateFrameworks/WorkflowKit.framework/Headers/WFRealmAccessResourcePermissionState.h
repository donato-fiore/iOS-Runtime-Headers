// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREALMACCESSRESOURCEPERMISSIONSTATE_H
#define WFREALMACCESSRESOURCEPERMISSIONSTATE_H

@class NSData, NSString;


#import "RLMObject.h"
#import "RLMLinkingObjects.h"

@interface WFRealmAccessResourcePermissionState : RLMObject

@property (copy) NSData *data; // ivar: _data
@property (copy) NSString *identifier; // ivar: _identifier
@property (readonly) RLMLinkingObjects *trustedResources; // ivar: _trustedResources


+(id)linkingObjectsProperties;
+(id)requiredProperties;


@end


#endif