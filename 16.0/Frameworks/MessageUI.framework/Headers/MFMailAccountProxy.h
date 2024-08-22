// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILACCOUNTPROXY_H
#define MFMAILACCOUNTPROXY_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MFMailAccountProxy : NSObject {
    NSDictionary *_properties;
}


@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSString *firstEmailAddress;
@property (readonly, nonatomic) NSArray *fromEmailAddresses;
@property (readonly, nonatomic) NSArray *fromEmailAddressesIncludingDisabled;
@property (readonly, nonatomic) NSString *fullUserName;
@property (readonly, nonatomic) BOOL isDefaultDeliveryAccount;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) id *mailAccount;
@property (readonly, nonatomic) BOOL restrictsRepliesAndForwards;
@property (readonly, nonatomic) BOOL supportsMailDrop;
@property (readonly, nonatomic) BOOL supportsThreadOperations;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *username;


+(id)log;
-(BOOL)_isActive;
-(BOOL)_isRestricted;
-(id)_initWithProperties:(id)arg0 ;


@end


#endif