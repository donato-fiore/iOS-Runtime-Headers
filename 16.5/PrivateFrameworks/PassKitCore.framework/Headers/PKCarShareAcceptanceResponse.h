// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCARSHAREACCEPTANCERESPONSE_H
#define PKCARSHAREACCEPTANCERESPONSE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAppletSubcredential.h"

@interface PKCarShareAcceptanceResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (retain, nonatomic) PKAppletSubcredential *subcredential; // ivar: _subcredential


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCarShareAcceptanceResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif