// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INAPPBINDINGREQUEST_H
#define INAPPBINDINGREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface InAppBindingRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *pinningID; // ivar: _pinningID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPinningID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif