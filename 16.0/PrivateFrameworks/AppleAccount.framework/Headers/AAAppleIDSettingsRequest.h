// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAAPPLEIDSETTINGSREQUEST_H
#define AAAPPLEIDSETTINGSREQUEST_H

@class ACAccountStore, ACAccount;


#import "AARequest.h"

@interface AAAppleIDSettingsRequest : AARequest {
    ACAccountStore *_store;
}


@property (nonatomic) BOOL forceGSToken; // ivar: _forceGSToken
@property (readonly, nonatomic) ACAccount *grandSlamAccount; // ivar: _grandSlamAccount


+(Class)responseClass;
-(id)initWithGrandSlamAccount:(id)arg0 accountStore:(id)arg1 ;
-(id)urlRequest;


@end


#endif