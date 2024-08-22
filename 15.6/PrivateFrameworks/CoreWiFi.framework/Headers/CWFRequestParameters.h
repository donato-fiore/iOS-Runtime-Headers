// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFREQUESTPARAMETERS_H
#define CWFREQUESTPARAMETERS_H

@class NSUUID, SFAuthorization, NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFRequestParameters : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) SFAuthorization *authorization; // ivar: _authorization
@property (readonly, copy, nonatomic) NSData *authorizationExternalFormData;
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) NSInteger queuePriority; // ivar: _queuePriority
@property (nonatomic) NSUInteger timeout; // ivar: _timeout
@property (nonatomic) int virtualInterfaceRole; // ivar: _virtualInterfaceRole


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTorequestParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)__authData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif