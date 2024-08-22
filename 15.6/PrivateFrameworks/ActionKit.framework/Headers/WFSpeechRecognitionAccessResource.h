// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSPEECHRECOGNITIONACCESSRESOURCE_H
#define WFSPEECHRECOGNITIONACCESSRESOURCE_H

@class WFAccessResource;



@interface WFSpeechRecognitionAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)errorRecoveryOptionsForStatus:(NSUInteger)arg0 ;
-(id)icon;
-(id)localizedErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)name;
-(id)protectedResourceDescription;
-(void)attemptRecoveryFromErrorWithOptionIndex:(NSUInteger)arg0 userInterface:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif