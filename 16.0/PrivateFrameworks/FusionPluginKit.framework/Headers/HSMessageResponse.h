// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSMESSAGERESPONSE_H
#define HSMESSAGERESPONSE_H

@class NSError, NSString, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;


#import "HSMessage.h"

@interface HSMessageResponse : HSMessage <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (readonly, nonatomic) NSString *messageStr; // ivar: _messageStr
@property (readonly, nonatomic) NSDictionary *responseDict; // ivar: _responseDict
@property (readonly, nonatomic) NSNumber *statusCode; // ivar: _statusCode


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 statusCode:(id)arg1 ;
-(id)initWithName:(id)arg0 statusCode:(id)arg1 andResponse:(id)arg2 ;
-(id)initWithName:(id)arg0 statusCode:(id)arg1 andResponse:(id)arg2 andError:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif