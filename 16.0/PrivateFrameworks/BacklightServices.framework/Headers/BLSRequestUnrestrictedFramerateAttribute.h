// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSREQUESTUNRESTRICTEDFRAMERATEATTRIBUTE_H
#define BLSREQUESTUNRESTRICTEDFRAMERATEATTRIBUTE_H



#import "BLSSceneAttribute.h"

@interface BLSRequestUnrestrictedFramerateAttribute : BLSSceneAttribute



+(id)requestUnrestrictedFramerateForFBSScene:(id)arg0 ;
+(id)requestUnrestrictedFramerateForFBSSceneIdentityToken:(id)arg0 ;
-(BOOL)checkEntitlementSourceForRequiredEntitlements:(id)arg0 error:(*id)arg1 ;


@end


#endif