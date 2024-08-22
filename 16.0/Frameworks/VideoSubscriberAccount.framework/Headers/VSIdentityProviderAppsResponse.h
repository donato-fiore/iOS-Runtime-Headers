// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSIDENTITYPROVIDERAPPSRESPONSE_H
#define VSIDENTITYPROVIDERAPPSRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VSIdentityProviderAppsResponse : NSObject

@property (copy, nonatomic) NSArray *channelMappings; // ivar: _channelMappings
@property (copy, nonatomic) NSArray *providerAppAdamIDs; // ivar: _providerAppAdamIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif