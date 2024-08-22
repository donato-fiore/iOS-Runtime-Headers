// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMASSET_H
#define RMASSET_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RMManagementChannel.h"

@interface RMAsset : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) RMManagementChannel *channel; // ivar: _channel
@property (readonly, copy, nonatomic) NSData *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *serverToken; // ivar: _serverToken
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAsset:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 identifier:(id)arg1 serverToken:(id)arg2 content:(id)arg3 channel:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif