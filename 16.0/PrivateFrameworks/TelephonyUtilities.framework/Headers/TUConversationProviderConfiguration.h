// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCONVERSATIONPROVIDERCONFIGURATION_H
#define TUCONVERSATIONPROVIDERCONFIGURATION_H

@class NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationProviderConfiguration : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *pseudonymFeatureID; // ivar: _pseudonymFeatureID
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (copy, nonatomic) NSSet *supportedMediaTypes; // ivar: _supportedMediaTypes
@property (nonatomic) BOOL supportsConversationHandoff; // ivar: _supportsConversationHandoff
@property (nonatomic) BOOL supportsLinks; // ivar: _supportsLinks
@property (nonatomic) BOOL supportsSharePlay; // ivar: _supportsSharePlay
@property (readonly, nonatomic) BOOL supportsVideo;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationProvider:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif