// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAFAMILYREQUEST_H
#define AAFAMILYREQUEST_H

@class ACAccount;


#import "AARequest.h"
#import "AAGrandSlamSigner.h"

@interface AAFamilyRequest : AARequest {
    ACAccount *_appleAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
}


@property (readonly, nonatomic) BOOL isUserInitiated;


-(id)_familyGrandSlamSigner;
-(id)initWithAppleAccount:(id)arg0 grandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)initWithGrandSlamAccount:(id)arg0 accountStore:(id)arg1 ;
-(id)initWithGrandSlamSigner:(id)arg0 ;
-(id)urlRequest;


@end


#endif