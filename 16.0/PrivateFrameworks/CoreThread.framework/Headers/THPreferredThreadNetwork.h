// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef THPREFERREDTHREADNETWORK_H
#define THPREFERREDTHREADNETWORK_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "THThreadNetworkCredentialsActiveDataSetRecord.h"
#import "THThreadNetwork.h"
#import "THNetworkSignature.h"

@interface THPreferredThreadNetwork : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) THThreadNetworkCredentialsActiveDataSetRecord *credentialsDataSetRecord; // ivar: _credentialsDataSetRecord
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly, nonatomic) THThreadNetwork *network; // ivar: _network
@property (readonly, nonatomic) THNetworkSignature *networkSignature; // ivar: _networkSignature
@property (copy, nonatomic) NSString *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithThreadNetwork:(id)arg0 networkSignature:(id)arg1 credentialsDataSetRecord:(id)arg2 creationDate:(id)arg3 lastModificationDate:(id)arg4 userInfo:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUserInfo:(id)arg0 ;


@end


#endif