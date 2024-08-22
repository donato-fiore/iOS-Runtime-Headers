// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDCONFIGURATION_H
#define DNDCONFIGURATION_H

@class NSDictionary, NSSet;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDSenderConfiguration.h"

@interface DNDConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *allowedApplicationIdentifiers; // ivar: _allowedApplicationIdentifiers
@property (readonly, copy, nonatomic) NSDictionary *allowedApplications;
@property (readonly, copy, nonatomic) NSSet *deniedApplicationIdentifiers; // ivar: _deniedApplicationIdentifiers
@property (readonly, copy, nonatomic) NSSet *deniedApplications;
@property (readonly, nonatomic) NSUInteger hideApplicationBadges; // ivar: _hideApplicationBadges
@property (readonly, nonatomic) NSUInteger minimumBreakthroughUrgency; // ivar: _minimumBreakthroughUrgency
@property (readonly, copy, nonatomic) DNDSenderConfiguration *senderConfiguration; // ivar: _senderConfiguration
@property (readonly, nonatomic) NSUInteger suppressionType; // ivar: _suppressionType
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSUInteger)defaultConfigurationType;
+(NSUInteger)defaultMinimumBreakthroughUrgency;
+(NSUInteger)defaultSuppressionType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_exceptionForApplicationIdentifier:(id)arg0 thread:(id)arg1 ;
-(NSUInteger)exceptionForApplication:(id)arg0 ;
-(NSUInteger)exceptionForApplication:(id)arg0 thread:(id)arg1 ;
-(NSUInteger)exceptionForApplicationIdentifier:(id)arg0 ;
-(NSUInteger)exceptionForApplicationIdentifier:(id)arg0 thread:(id)arg1 ;
-(NSUInteger)exceptionForContact:(id)arg0 ;
-(NSUInteger)exceptionForContactHandle:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForRedacted:(BOOL)arg0 ;
-(id)_initWithConfigurationType:(NSUInteger)arg0 ;
-(id)_initWithConfigurationType:(NSUInteger)arg0 suppressionType:(NSUInteger)arg1 allowedApplicationIdentifiers:(id)arg2 deniedApplicationIdentifiers:(id)arg3 senderConfiguration:(id)arg4 minimumBreakthroughUrgency:(NSUInteger)arg5 hideApplicationBadges:(NSUInteger)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)redactedDescription;
-(void)diffAgainstObject:(id)arg0 usingDiffBuilder:(id)arg1 withDescription:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)log:(id)arg0 withPrefix:(id)arg1 ;


@end


#endif