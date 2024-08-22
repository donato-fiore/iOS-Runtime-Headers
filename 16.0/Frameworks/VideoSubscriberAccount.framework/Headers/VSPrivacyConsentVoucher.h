// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSPRIVACYCONSENTVOUCHER_H
#define VSPRIVACYCONSENTVOUCHER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSPrivacyConsentVoucher : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *appAdamID; // ivar: _appAdamID
@property (readonly, copy, nonatomic) NSString *providerID; // ivar: _providerID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAppAdamID:(id)arg0 providerID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif