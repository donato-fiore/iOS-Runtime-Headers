// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKVIRTUALCONFERENCEEXTENSIONCONTEXT_H
#define EKVIRTUALCONFERENCEEXTENSIONCONTEXT_H

@class NSExtensionContext, NSURL, NSDate, NSString;



@interface EKVirtualConferenceExtensionContext : NSExtensionContext

@property (readonly, nonatomic) NSURL *URLForInvalidation;
@property (readonly, nonatomic) NSURL *URLForRenewal;
@property (readonly, nonatomic) NSDate *renewalDate;
@property (readonly, nonatomic) int requestType;
@property (readonly, nonatomic) NSString *roomTypeIdentifier;


+(id)_allowedItemPayloadClasses;
-(void)completeRequestWithAvailableRoomTypes:(id)arg0 completionHandler:(id)arg1 ;
-(void)completeRequestWithInvalidationSuccess:(BOOL)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)completeRequestWithRenewalSuccess:(BOOL)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)completeRequestWithVirtualConference:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif