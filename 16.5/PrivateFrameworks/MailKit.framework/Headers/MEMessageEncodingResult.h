// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEMESSAGEENCODINGRESULT_H
#define MEMESSAGEENCODINGRESULT_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MEEncodedOutgoingMessage.h"

@interface MEMessageEncodingResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) MEEncodedOutgoingMessage *encodedMessage; // ivar: _encodedMessage
@property (readonly, copy, nonatomic) NSError *encryptionError; // ivar: _encryptionError
@property (readonly, copy, nonatomic) NSError *signingError; // ivar: _signingError


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncodedMessage:(id)arg0 signingError:(id)arg1 encryptionError:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif