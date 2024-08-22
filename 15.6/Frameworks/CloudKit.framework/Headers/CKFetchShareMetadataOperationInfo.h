// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFETCHSHAREMETADATAOPERATIONINFO_H
#define CKFETCHSHAREMETADATAOPERATIONINFO_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;


#import "CKOperationInfo.h"

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *rootRecordDesiredKeys; // ivar: _rootRecordDesiredKeys
@property (retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL; // ivar: _shareInvitationTokensByShareURL
@property (retain, nonatomic) NSArray *shareURLsToFetch; // ivar: _shareURLsToFetch
@property (nonatomic) BOOL shouldFetchRootRecord; // ivar: _shouldFetchRootRecord


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif