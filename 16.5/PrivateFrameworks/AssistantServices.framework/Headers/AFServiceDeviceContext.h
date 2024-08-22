// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSERVICEDEVICECONTEXT_H
#define AFSERVICEDEVICECONTEXT_H

@class NSString, NSUUID, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFServiceDeviceContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier; // ivar: _mediaRouteIdentifier
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier; // ivar: _mediaSystemIdentifier
@property (readonly, copy, nonatomic) NSDictionary *metricsContext; // ivar: _metricsContext
@property (readonly, nonatomic) NSInteger proximity; // ivar: _proximity
@property (readonly, copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (readonly, copy, nonatomic) NSDictionary *serializedContextByKey; // ivar: _serializedContextByKey
@property (readonly, copy, nonatomic) NSString *sharedUserID; // ivar: _sharedUserID


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 assistantIdentifier:(id)arg1 mediaSystemIdentifier:(id)arg2 mediaRouteIdentifier:(id)arg3 sharedUserID:(id)arg4 roomName:(id)arg5 proximity:(NSInteger)arg6 serializedContextByKey:(id)arg7 metricsContext:(id)arg8 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif