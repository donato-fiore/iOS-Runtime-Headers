// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEONDEMANDRULEEVALUATECONNECTION_H
#define NEONDEMANDRULEEVALUATECONNECTION_H

@class NSArray;


#import "NEOnDemandRule.h"

@interface NEOnDemandRuleEvaluateConnection : NEOnDemandRule

@property (copy) NSArray *connectionRules; // ivar: _connectionRules


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif