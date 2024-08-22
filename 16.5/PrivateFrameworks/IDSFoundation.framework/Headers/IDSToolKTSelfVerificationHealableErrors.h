// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSTOOLKTSELFVERIFICATIONHEALABLEERRORS_H
#define IDSTOOLKTSELFVERIFICATIONHEALABLEERRORS_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSToolKTSelfVerificationHealableErrors : NSObject <NSSecureCoding>



@property (retain) NSArray *accountHealableErrors; // ivar: _accountHealableErrors
@property (retain) NSDictionary *deviceIdToHealableErrors; // ivar: _deviceIdToHealableErrors
@property NSUInteger healableState; // ivar: _healableState


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif