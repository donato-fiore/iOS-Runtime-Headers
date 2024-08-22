// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSMACHSERVICEALIASES_H
#define BSMACHSERVICEALIASES_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface BSMachServiceAliases : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_lock_aliases;
    NSString *_lock_encoded;
    os_unfair_lock_s _lock;
    BOOL _mutable;
}


@property (readonly, copy, nonatomic) NSDictionary *environmentRepresentation;


+(id)environmentAliases;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)resolveMachService:(id)arg0 ;


@end


#endif