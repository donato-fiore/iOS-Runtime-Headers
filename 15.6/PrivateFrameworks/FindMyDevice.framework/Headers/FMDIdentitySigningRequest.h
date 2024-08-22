// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDIDENTITYSIGNINGREQUEST_H
#define FMDIDENTITYSIGNINGREQUEST_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *dataToSign; // ivar: _dataToSign
@property (nonatomic) BOOL useSCRT; // ivar: _useSCRT
@property (nonatomic) NSInteger validityInMinutes; // ivar: _validityInMinutes


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif