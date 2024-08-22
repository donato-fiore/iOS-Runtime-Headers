// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFICLOUDDRIVEACCESSRESOURCE_H
#define WFICLOUDDRIVEACCESSRESOURCE_H

@class WFAccessResource;



@interface WFiCloudDriveAccessResource : WFAccessResource



+(BOOL)isSystemResource;
+(BOOL)mustBeAvailableForDisplay;
-(NSUInteger)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)errorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)protectedResourceDescription;
-(void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(NSUInteger)arg0 userInterface:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif