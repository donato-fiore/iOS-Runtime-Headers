// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPERAPP_H
#define NEPERAPP_H

@class NSArray;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEPerApp : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property (copy) NSArray *appRules; // ivar: _appRules
@property (copy) NSArray *excludedDomains; // ivar: _excludedDomains
@property BOOL noRestriction; // ivar: _noRestriction
@property BOOL restrictDomains; // ivar: _restrictDomains


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)removeAppRuleByID:(id)arg0 ;
-(id)copyAppRuleByID:(id)arg0 ;
-(id)copyAppRuleBySigningIdentifier:(id)arg0 ;
-(id)copyAppRuleIDs;
-(id)copyCachedMachOUUIDs;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAppRulesForUID:(unsigned int)arg0 ;


@end


#endif