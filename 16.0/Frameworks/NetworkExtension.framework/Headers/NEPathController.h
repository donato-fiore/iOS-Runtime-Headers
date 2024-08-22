// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPATHCONTROLLER_H
#define NEPATHCONTROLLER_H

@class NSArray;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

 {
    NSArray *_payloadAppRules;
}


@property NSInteger cellularFallbackFlags; // ivar: _cellularFallbackFlags
@property (getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL hasNonDefaultRules;
@property BOOL ignoreFallback; // ivar: _ignoreFallback
@property BOOL ignoreRouteRules; // ivar: _ignoreRouteRules
@property (copy) NSArray *pathRules; // ivar: _pathRules


+(BOOL)supportsSecureCoding;
+(id)copyAggregatePathRules;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)removePathRuleBySigningIdentifier:(id)arg0 ;
-(id)copyPathRuleBySigningIdentifier:(id)arg0 ;
-(id)copyPathRuleSigningIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif