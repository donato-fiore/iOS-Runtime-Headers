// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNACTIONCONFIRMATIONREQUEST_H
#define LNACTIONCONFIRMATIONREQUEST_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LNSuccessResult.h"

@interface LNActionConfirmationRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) LNSuccessResult *result; // ivar: _result


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 result:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)respondWithConfirmation:(BOOL)arg0 ;
-(void)respondWithError:(id)arg0 ;


@end


#endif