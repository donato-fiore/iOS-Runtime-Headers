// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSEARCHTAGRESULT_H
#define PKSEARCHTAGRESULT_H

@class NSString;
@protocol PKSearchAutocompleteToken;

#import <Foundation/Foundation.h>

#import "PKPaymentTransactionTag.h"

@interface PKSearchTagResult : NSObject <PKSearchAutocompleteToken>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaymentTransactionTag *tag; // ivar: _tag


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)tokenType;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif