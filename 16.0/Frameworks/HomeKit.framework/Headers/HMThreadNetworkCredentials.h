// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMTHREADNETWORKCREDENTIALS_H
#define HMTHREADNETWORKCREDENTIALS_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface HMThreadNetworkCredentials : NSObject

@property (readonly, nonatomic) NSData *PSKc; // ivar: _PSKc
@property (readonly, nonatomic) NSString *commissionerPassphrase; // ivar: _commissionerPassphrase
@property (readonly, nonatomic) NSData *extendedPANID; // ivar: _extendedPANID
@property (readonly, nonatomic) NSString *networkName; // ivar: _networkName


-(id)initWithNetworkName:(id)arg0 extendedPANID:(id)arg1 PSKc:(id)arg2 ;
-(id)initWithNetworkName:(id)arg0 extendedPANID:(id)arg1 commissionerPassphrase:(id)arg2 ;


@end


#endif