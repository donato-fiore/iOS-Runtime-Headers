// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEMESSAGE_H
#define MEMESSAGE_H

@class NSArray, NSDate, NSDictionary, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MEEmailAddress.h"
#import "MEMessageRecipients.h"

@interface MEMessage : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *allRecipientAddresses;
@property (readonly, copy, nonatomic) NSArray *bccAddresses;
@property (readonly, copy, nonatomic) NSArray *ccAddresses;
@property (readonly, copy, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (readonly, copy, nonatomic) NSDate *dateSent; // ivar: _dateSent
@property (readonly, copy, nonatomic) MEEmailAddress *fromAddress; // ivar: _fromAddress
@property (readonly, copy, nonatomic) NSDictionary *headers; // ivar: _headers
@property (readonly, copy, nonatomic) NSData *rawData; // ivar: _rawData
@property (retain, nonatomic) MEMessageRecipients *recipients; // ivar: _recipients
@property (readonly, copy, nonatomic) NSArray *replyToAddresses;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, copy, nonatomic) NSString *subject; // ivar: _subject
@property (readonly, copy, nonatomic) NSArray *toAddresses;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_sanitaizedHeadersForHeaders:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 subject:(id)arg1 recipients:(id)arg2 from:(id)arg3 dataSent:(id)arg4 dateReceived:(id)arg5 headers:(id)arg6 rawData:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif