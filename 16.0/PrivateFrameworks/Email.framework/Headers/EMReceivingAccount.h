// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMRECEIVINGACCOUNT_H
#define EMRECEIVINGACCOUNT_H

@class NSString, NSArray;
@protocol EMReceivingAccountBuilder;


#import "EMAccount.h"
#import "EMDeliveryAccount.h"

@interface EMReceivingAccount : EMAccount <EMReceivingAccountBuilder>

 {
    NSString *_name;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) EMDeliveryAccount *deliveryAccount; // ivar: _deliveryAccount
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (nonatomic) BOOL isLocalAccount; // ivar: _isLocalAccount
@property (nonatomic, getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount; // ivar: _primaryiCloudAccount
@property (nonatomic) BOOL shouldArchiveByDefault; // ivar: _shouldArchiveByDefault
@property (nonatomic) BOOL sourceIsManaged; // ivar: _sourceIsManaged
@property (copy, nonatomic) NSString *statisticsKind; // ivar: _statisticsKind
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 name:(id)arg1 hostname:(id)arg2 builder:(id)arg3 ;
-(id)name;
-(void)_commonInitName:(id)arg0 hostname:(id)arg1 builder:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif