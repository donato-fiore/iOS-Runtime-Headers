// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONTEXTDONATION_H
#define CKCONTEXTDONATION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKContextUserActivity.h"

@interface CKContextDonation : NSObject <NSSecureCoding>

 {
    uint8_t _donated;
}


@property (retain, nonatomic) CKContextUserActivity *associatedUserActivity; // ivar: _associatedUserActivity
@property (readonly, nonatomic) NSString *donorBundleIdentifier; // ivar: _donorBundleIdentifier
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) NSUInteger nonce; // ivar: _nonce
@property NSUInteger remoteProcesses; // ivar: _remoteProcesses


+(BOOL)supportsSecureCoding;
+(id)establishServiceConnection;
-(id)_concatenatedRequestTextUsingDebugText:(BOOL)arg0 ;
-(id)concatenatedRequestsDebugText;
-(id)concatenatedRequestsText;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDonations:(id)arg0 donorBundleIdentifier:(id)arg1 ;
-(id)initWithDonorBundleIdentifier:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)donate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif