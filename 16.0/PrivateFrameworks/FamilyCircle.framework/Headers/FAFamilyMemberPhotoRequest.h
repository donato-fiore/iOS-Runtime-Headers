// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFAMILYMEMBERPHOTOREQUEST_H
#define FAFAMILYMEMBERPHOTOREQUEST_H

@class AAFamilyRequest, NSString, NSNumber, ACAccount;



@interface FAFamilyMemberPhotoRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *familyMemberAltDSID; // ivar: _familyMemberAltDSID
@property (copy, nonatomic) NSNumber *familyMemberDSID; // ivar: _familyMemberDSID
@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount; // ivar: _iTunesAccount
@property (copy, nonatomic) NSString *serverCacheTag; // ivar: _serverCacheTag


+(Class)responseClass;
-(id)initWithMemberAltDSID:(id)arg0 accountStore:(id)arg1 ;
-(id)initWithMemberDSID:(id)arg0 accountStore:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif