// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWTRUSTEDRESOURCES_H
#define WFWORKFLOWTRUSTEDRESOURCES_H

@class RLMArray<WFRealmAccessResourcePermissionState>, RLMArray<WFTrustedJavaScriptDomain>;
@protocol NSCopying;


#import "RLMObject.h"
#import "RLMLinkingObjects.h"

@interface WFWorkflowTrustedResources : RLMObject <NSCopying>



@property (retain) RLMArray<WFRealmAccessResourcePermissionState> *accessResourcePermissionStates; // ivar: _accessResourcePermissionStates
@property (retain) RLMArray<WFTrustedJavaScriptDomain> *trustedDomains; // ivar: _trustedDomains
@property (readonly) RLMLinkingObjects *workflows; // ivar: _workflows


+(id)linkingObjectsProperties;
+(id)requiredProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif