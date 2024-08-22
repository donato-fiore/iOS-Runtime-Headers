// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFIDOPROFILE_H
#define PKFIDOPROFILE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKFidoProfile : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accountHash; // ivar: _accountHash
@property (retain, nonatomic) NSString *keyHash; // ivar: _keyHash
@property (retain, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif