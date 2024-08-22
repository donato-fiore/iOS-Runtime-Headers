// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCLUSTERCONFIGURATION_H
#define COCLUSTERCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "COClusterRealm.h"

@interface COClusterConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (readonly, nonatomic) COClusterRealm *realm; // ivar: _realm
@property (readonly, nonatomic) NSUInteger requiredServices; // ivar: _requiredServices


+(BOOL)_validateServices:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_prefixFromDomain:(id)arg0 ;
+(id)configurationWithDomain:(id)arg0 requiredServices:(NSUInteger)arg1 options:(NSUInteger)arg2 realm:(id)arg3 ;
+(id)domainPermittedCharacterSet;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClusterConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithPrefix:(id)arg0 requiredServices:(NSUInteger)arg1 options:(NSUInteger)arg2 realm:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif