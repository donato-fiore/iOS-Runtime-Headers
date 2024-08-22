// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCONTACTLESSPAYMENTENDEVENT_H
#define NFCONTACTLESSPAYMENTENDEVENT_H

@class NSString, NSDecimalNumber, NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NFApplet.h"

@interface NFContactlessPaymentEndEvent : NSObject <NSSecureCoding>

 {
    NSString *_appletIdentifier;
}


@property (readonly, retain, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, retain, nonatomic) NFApplet *applet; // ivar: _applet
@property (readonly, nonatomic) BOOL background; // ivar: _background
@property (readonly, nonatomic) unsigned int command; // ivar: _command
@property (readonly, retain, nonatomic) NSString *currency; // ivar: _currency
@property (readonly, nonatomic) BOOL didError; // ivar: _didError
@property (readonly, retain, nonatomic) NSDictionary *felicaInfo; // ivar: _felicaInfo
@property (readonly, nonatomic) unsigned short informative; // ivar: _informative
@property (readonly, retain, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (readonly, retain, nonatomic) NSDictionary *parsedInfo; // ivar: _parsedInfo
@property (readonly, retain, nonatomic) NSString *readerIdentifier; // ivar: _readerIdentifier
@property (readonly, nonatomic) unsigned short result; // ivar: _result
@property (readonly, nonatomic) unsigned short status; // ivar: _status
@property (readonly, retain, nonatomic) NSData *tlv; // ivar: _tlv
@property (readonly, retain, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier
@property (readonly, nonatomic) unsigned short type; // ivar: _type


+(BOOL)logsTransactionDetails;
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif