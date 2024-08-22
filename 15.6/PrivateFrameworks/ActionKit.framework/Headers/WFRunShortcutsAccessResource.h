// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFRUNSHORTCUTSACCESSRESOURCE_H
#define WFRUNSHORTCUTSACCESSRESOURCE_H

@class WFAccessResource;



@interface WFRunShortcutsAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)attemptRecoveryFromErrorMessage;
-(id)errorReasonForStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)protectedResourceDescription;


@end


#endif