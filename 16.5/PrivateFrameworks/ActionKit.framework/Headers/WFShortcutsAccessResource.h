// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHORTCUTSACCESSRESOURCE_H
#define WFSHORTCUTSACCESSRESOURCE_H

@class WFAccessResource;



@interface WFShortcutsAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)attemptRecoveryFromErrorMessage;
-(id)errorReasonForStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)protectedResourceDescription;


@end


#endif