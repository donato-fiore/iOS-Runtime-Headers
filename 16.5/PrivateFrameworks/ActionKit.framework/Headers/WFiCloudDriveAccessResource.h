// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFICLOUDDRIVEACCESSRESOURCE_H
#define WFICLOUDDRIVEACCESSRESOURCE_H

@class WFAccessResource;



@interface WFiCloudDriveAccessResource : WFAccessResource



+(BOOL)isSystemResource;
+(BOOL)mustBeAvailableForDisplay;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)errorReasonForStatus:(NSUInteger)arg0 ;
-(id)errorRecoveryOptionsForStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)protectedResourceDescription;
-(void)attemptRecoveryFromErrorWithOptionIndex:(NSUInteger)arg0 userInterface:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif