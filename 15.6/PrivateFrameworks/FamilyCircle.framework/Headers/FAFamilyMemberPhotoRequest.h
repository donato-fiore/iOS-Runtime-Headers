// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAFAMILYMEMBERPHOTOREQUEST_H
#define FAFAMILYMEMBERPHOTOREQUEST_H

@class AAFamilyRequest, NSNumber, ACAccount, NSString;



@interface FAFamilyMemberPhotoRequest : AAFamilyRequest

@property (copy, nonatomic) NSNumber *familyMemberDSID; // ivar: _familyMemberDSID
@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount; // ivar: _iTunesAccount
@property (copy, nonatomic) NSString *serverCacheTag; // ivar: _serverCacheTag


+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;


@end


#endif