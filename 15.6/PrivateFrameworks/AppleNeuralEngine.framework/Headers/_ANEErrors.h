// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ANEERRORS_H
#define _ANEERRORS_H


#import <Foundation/Foundation.h>


@interface _ANEErrors : NSObject



+(id)createErrorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)entitlementErrorForMethod:(id)arg0 ;
+(id)fileAccessErrorForMethod:(id)arg0 ;
+(id)invalidModelErrorForMethod:(id)arg0 ;
+(id)invalidModelKeyErrorForMethod:(id)arg0 ;
+(id)missingCodeSigningErrorForMethod:(id)arg0 ;
+(id)priorityErrorForMethod:(id)arg0 ;
+(id)programCreationErrorForMethod:(id)arg0 ;
+(id)programInferenceOtherErrorForMethod:(id)arg0 ;
+(id)programInferenceOverflowErrorForMethod:(id)arg0 ;
+(id)programLoadErrorForMethod:(id)arg0 ;
+(id)programLoadErrorForMethod:(id)arg0 code:(NSInteger)arg1 ;
+(id)systemModelPurgeNotAllowedForMethod:(id)arg0 ;
+(id)timeoutErrorForMethod:(id)arg0 ;


@end


#endif