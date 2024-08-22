// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSITAPPLETSTATEDIRTY_H
#define PKTRANSITAPPLETSTATEDIRTY_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKTransitAppletStateDirty : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSString *dpanIdentifier; // ivar: _dpanIdentifier
@property (copy, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (copy, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPKTransitAppletStateDirty:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPassUniqueIdentifier:(id)arg0 paymentApplication:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif