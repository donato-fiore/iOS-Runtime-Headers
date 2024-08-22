// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDCONTEXTUALKEYPATH_H
#define _CDCONTEXTUALKEYPATH_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (nonatomic) BOOL isEphemeral; // ivar: _isEphemeral
@property (nonatomic) BOOL isUserCentric; // ivar: _isUserCentric
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL sensitiveContents; // ivar: _sensitiveContents


+(BOOL)supportsSecureCoding;
+(id)ephemeralKeyPathWithKey:(id)arg0 ;
+(id)keyPathWithKey:(id)arg0 ;
+(id)keyPathWithKey:(id)arg0 isUserCentric:(BOOL)arg1 ;
+(id)remoteKeyPathForKeyPath:(id)arg0 forDeviceID:(id)arg1 ;
+(id)remotekeyPathForKeyPath:(id)arg0 forDevice:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMultiDeviceKeyPath;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 forDevice:(NSUInteger)arg1 isUserCentric:(BOOL)arg2 isEphemeral:(BOOL)arg3 ;
-(id)initWithKey:(id)arg0 forDeviceID:(id)arg1 isUserCentric:(BOOL)arg2 isEphemeral:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif