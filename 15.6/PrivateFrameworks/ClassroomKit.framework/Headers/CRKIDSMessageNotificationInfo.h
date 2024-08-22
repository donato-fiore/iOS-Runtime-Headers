// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKIDSMESSAGENOTIFICATIONINFO_H
#define CRKIDSMESSAGENOTIFICATIONINFO_H

@class NSDictionary, NSString;
@protocol CRKDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CRKIDSMessageNotificationInfo : NSObject <CRKDictionaryCodable>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSDictionary *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *senderAddress; // ivar: _senderAddress
@property (readonly, copy, nonatomic) NSString *senderAppleID; // ivar: _senderAppleID


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithMessage:(id)arg0 senderAppleID:(id)arg1 senderAddress:(id)arg2 ;


@end


#endif