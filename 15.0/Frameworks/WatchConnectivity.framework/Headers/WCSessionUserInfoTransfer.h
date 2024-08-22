// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WCSESSIONUSERINFOTRANSFER_H
#define WCSESSIONUSERINFOTRANSFER_H

@class NSString, NSDate, NSError, NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WCUserInfo.h"

@interface WCSessionUserInfoTransfer : NSObject <NSSecureCoding>



@property (copy) NSString *complicationTransferIdentifier; // ivar: _complicationTransferIdentifier
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic, getter=isCurrentComplicationInfo) BOOL currentComplicationInfo; // ivar: _currentComplicationInfo
@property (retain) NSError *transferError; // ivar: _transferError
@property (copy) NSString *transferIdentifier; // ivar: _transferIdentifier
@property (nonatomic, getter=isTransferring) BOOL transferring; // ivar: _transferring
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy) NSData *userInfoData;
@property (retain, nonatomic) WCUserInfo *userInfoStorage; // ivar: _userInfoStorage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateUserInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateUserInfoData:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifyUserInfo;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComplicationTransferIdentifier:(id)arg0 ;
-(id)initWithProtoBufFileURL:(id)arg0 ;
-(id)initWithTranferIdentifier:(id)arg0 complicationTransferIdentifier:(id)arg1 currentComplication:(BOOL)arg2 ;
-(id)protobufData;
-(void)cancel;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif