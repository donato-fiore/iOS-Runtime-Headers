// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAUTOFILLONETIMECODEEMBEDDEDDOMAINPAIR_H
#define SFAUTOFILLONETIMECODEEMBEDDEDDOMAINPAIR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAutoFillOneTimeCodeEmbeddedDomainPair : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL strict; // ivar: _strict


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif