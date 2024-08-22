// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMMESSAGEDELIVERYRESULT_H
#define EMMESSAGEDELIVERYRESULT_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMMessageDeliveryResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif