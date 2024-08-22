// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMDELIVERYACCOUNT_H
#define EMDELIVERYACCOUNT_H

@class NSString;
@protocol EMDeliveryAccountBuilder;


#import "EMAccount.h"

@interface EMDeliveryAccount : EMAccount <EMDeliveryAccountBuilder>

 {
    NSString *_name;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (nonatomic) NSUInteger maximumMessageBytes; // ivar: _maximumMessageBytes
@property (nonatomic, getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount; // ivar: _primaryiCloudAccount
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