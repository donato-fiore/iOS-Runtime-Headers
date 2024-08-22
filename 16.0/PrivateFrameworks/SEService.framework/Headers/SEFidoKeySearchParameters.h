// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEFIDOKEYSEARCHPARAMETERS_H
#define SEFIDOKEYSEARCHPARAMETERS_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SEFidoKeySearchParameters : NSObject <NSSecureCoding>



@property (readonly) NSData *fidoKeyHash; // ivar: _fidoKeyHash
@property (readonly) NSString *relyingParty; // ivar: _relyingParty
@property (readonly) NSString *relyingPartyAccountHash; // ivar: _relyingPartyAccountHash


+(BOOL)supportsSecureCoding;
+(id)withRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif