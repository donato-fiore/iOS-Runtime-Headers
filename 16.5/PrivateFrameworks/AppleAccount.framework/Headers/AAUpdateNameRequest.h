// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUPDATENAMEREQUEST_H
#define AAUPDATENAMEREQUEST_H

@class NSString;


#import "AAAppleIDSettingsRequest.h"

@interface AAUpdateNameRequest : AAAppleIDSettingsRequest {
    NSString *_newFirstName;
    NSString *_newLastName;
}




+(Class)responseClass;
-(id)initWithGrandSlamAccount:(id)arg0 accountStore:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif