// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAICLOUDTERMSSTRINGREQUEST_H
#define AAICLOUDTERMSSTRINGREQUEST_H



#import "AAGenericTermsUIRequest.h"

@interface AAiCloudTermsStringRequest : AAGenericTermsUIRequest



+(Class)responseClass;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 preferPassword:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg0 termsEntries:(id)arg1 preferPassword:(BOOL)arg2 ;


@end


#endif