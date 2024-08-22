// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAMYPHOTOREQUEST_H
#define AAMYPHOTOREQUEST_H

@class ACAccount, NSString;


#import "AARequest.h"

@interface AAMyPhotoRequest : AARequest {
    ACAccount *_account;
}


@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount; // ivar: _iTunesAccount
@property (copy, nonatomic) NSString *serverCacheTag; // ivar: _serverCacheTag


+(Class)responseClass;
-(id)initWithAccount:(id)arg0 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif