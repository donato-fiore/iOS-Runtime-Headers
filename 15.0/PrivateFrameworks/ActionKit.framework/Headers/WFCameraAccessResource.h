// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCAMERAACCESSRESOURCE_H
#define WFCAMERAACCESSRESOURCE_H

@class WFAccessResource;



@interface WFCameraAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)errorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif