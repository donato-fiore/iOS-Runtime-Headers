// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef THTHREADNETWORKCREDENTIALSSTORERECORD_H
#define THTHREADNETWORKCREDENTIALSSTORERECORD_H

@class NSDate, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "THThreadNetworkCredentials.h"
#import "THThreadNetwork.h"

@interface THThreadNetworkCredentialsStoreRecord : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) THThreadNetworkCredentials *credentials; // ivar: _credentials
@property (readonly, nonatomic) NSString *keychainAccessGroup; // ivar: _keychainAccessGroup
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly, nonatomic) THThreadNetwork *network; // ivar: _network
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 credentials:(id)arg1 uniqueIdentifier:(id)arg2 keychainAccessGroup:(id)arg3 creationDate:(id)arg4 lastModificationDate:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif