// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPLOCALSECRET_H
#define CDPLOCALSECRET_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDPLocalSecret : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger secretType; // ivar: _secretType
@property (readonly, nonatomic) NSString *validatedSecret; // ivar: _validatedSecret


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValidatedSecret:(id)arg0 secretType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif