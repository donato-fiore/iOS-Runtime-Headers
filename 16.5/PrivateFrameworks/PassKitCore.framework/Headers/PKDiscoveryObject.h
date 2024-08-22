// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISCOVERYOBJECT_H
#define PKDISCOVERYOBJECT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKHardwareVersionRange.h"
#import "PKOSVersionRequirementRange.h"
#import "PKDiscoveryRelevantDateRange.h"

@interface PKDiscoveryObject : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKHardwareVersionRange *hardwareVersionRange; // ivar: _hardwareVersionRange
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger maxViewCount; // ivar: _maxViewCount
@property (nonatomic) NSInteger maxViewCountLargeCard; // ivar: _maxViewCountLargeCard
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange; // ivar: _osVersionRange
@property (retain, nonatomic) PKDiscoveryRelevantDateRange *relevantDateRange; // ivar: _relevantDateRange
@property (copy, nonatomic) NSString *ruleIdentifier; // ivar: _ruleIdentifier
@property (nonatomic) NSInteger status; // ivar: _status
@property (copy, nonatomic) NSString *triggerRuleIdentifier; // ivar: _triggerRuleIdentifier
@property (nonatomic) NSInteger version; // ivar: _version
@property (nonatomic) NSInteger viewCount; // ivar: _viewCount


+(BOOL)supportsSecureCoding;
+(id)convertEngagementRequestToDictionary:(id)arg0 ;
-(BOOL)hasTrigger;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTerminalStatus;
-(BOOL)isValidForTime:(id)arg0 ;
-(BOOL)updateWithDiscoveryObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementViewCount;
-(void)updateForRuleResult:(BOOL)arg0 ;
-(void)updatedStatusForAction:(NSInteger)arg0 ;


@end


#endif