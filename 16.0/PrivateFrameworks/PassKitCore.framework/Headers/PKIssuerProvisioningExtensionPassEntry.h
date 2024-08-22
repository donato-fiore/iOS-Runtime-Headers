// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKISSUERPROVISIONINGEXTENSIONPASSENTRY_H
#define PKISSUERPROVISIONINGEXTENSIONPASSENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKIssuerProvisioningExtensionPassEntry : NSObject

@property (readonly, nonatomic) *CGImage art; // ivar: _art
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)_initWithType:(NSInteger)arg0 identifier:(id)arg1 title:(id)arg2 art:(struct CGImage *)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)paymentPassEntry;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif