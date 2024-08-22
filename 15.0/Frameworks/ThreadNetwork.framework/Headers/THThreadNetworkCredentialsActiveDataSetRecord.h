// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef THTHREADNETWORKCREDENTIALSACTIVEDATASETRECORD_H
#define THTHREADNETWORKCREDENTIALSACTIVEDATASETRECORD_H

@class NSDate, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "THThreadNetworkBorderAgent.h"
#import "THThreadNetworkCredentials.h"
#import "THThreadNetworkCredentialsDataSet.h"
#import "THThreadNetwork.h"

@interface THThreadNetworkCredentialsActiveDataSetRecord : NSObject <NSSecureCoding>



@property (readonly, nonatomic) THThreadNetworkBorderAgent *borderAgent; // ivar: _borderAgent
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) THThreadNetworkCredentials *credentials; // ivar: _credentials
@property (readonly, nonatomic) THThreadNetworkCredentialsDataSet *credentialsDataSet; // ivar: _credentialsDataSet
@property (readonly, nonatomic) NSString *keychainAccessGroup; // ivar: _keychainAccessGroup
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly, nonatomic) THThreadNetwork *network; // ivar: _network
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithBorderAgent:(id)arg0 credentialsDataSet:(id)arg1 network:(id)arg2 credentials:(id)arg3 uniqueIdentifier:(id)arg4 keychainAccessGroup:(id)arg5 creationDate:(id)arg6 lastModificationDate:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif