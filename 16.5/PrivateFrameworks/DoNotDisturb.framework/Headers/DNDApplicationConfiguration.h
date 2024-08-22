// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDAPPLICATIONCONFIGURATION_H
#define DNDAPPLICATIONCONFIGURATION_H

@class NSSet;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDApplicationConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *allowedThreads; // ivar: _allowedThreads
@property (readonly, copy, nonatomic) NSSet *deniedThreads; // ivar: _deniedThreads
@property (readonly, nonatomic) NSUInteger minimumBreakthroughUrgency; // ivar: _minimumBreakthroughUrgency


+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithMinimumBreakthroughUrgency:(NSUInteger)arg0 allowedThreads:(id)arg1 deniedThreads:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diffDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif