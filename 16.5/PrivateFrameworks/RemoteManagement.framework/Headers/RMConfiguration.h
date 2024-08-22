// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMCONFIGURATION_H
#define RMCONFIGURATION_H

@class NSDictionary, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RMManagementChannel.h"

@interface RMConfiguration : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *assetByIdentifier; // ivar: _assetByIdentifier
@property (readonly, copy, nonatomic) RMManagementChannel *channel; // ivar: _channel
@property (readonly, copy, nonatomic) NSData *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *serverToken; // ivar: _serverToken
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 identifier:(id)arg1 serverToken:(id)arg2 content:(id)arg3 channel:(id)arg4 assetByIdentifier:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif