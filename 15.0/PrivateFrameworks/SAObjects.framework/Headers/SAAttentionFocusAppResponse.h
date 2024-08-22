// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAATTENTIONFOCUSAPPRESPONSE_H
#define SAATTENTIONFOCUSAPPRESPONSE_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAAttentionFocusAppResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *sceneId;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif