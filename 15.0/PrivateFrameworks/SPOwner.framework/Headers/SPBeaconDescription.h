// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPBEACONDESCRIPTION_H
#define SPBEACONDESCRIPTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPBeaconDescription : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger productId; // ivar: _productId
@property (nonatomic) NSInteger role; // ivar: _role
@property (readonly, copy, nonatomic) NSString *stableIdentifier; // ivar: _stableIdentifier
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (nonatomic) NSInteger vendorId; // ivar: _vendorId


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStableIdentifier:(id)arg0 name:(id)arg1 model:(id)arg2 systemVersion:(id)arg3 vendorId:(NSInteger)arg4 productId:(NSInteger)arg5 role:(NSInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif