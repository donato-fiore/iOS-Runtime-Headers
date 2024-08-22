// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIRULEQUALIFIEDFACTORPACKSETID_H
#define TRIRULEQUALIFIEDFACTORPACKSETID_H

@class NSString<TRIFactorPackSetId>;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIRuleQualifiedFactorPackSetId : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *ident; // ivar: _ident
@property (readonly, nonatomic) int targetingRuleIndex; // ivar: _targetingRuleIndex


+(id)factorPackSetIdWithIdent:(id)arg0 targetingRuleIndex:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFactorPackSetId:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementIdent:(id)arg0 ;
-(id)copyWithReplacementTargetingRuleIndex:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithIdent:(id)arg0 targetingRuleIndex:(int)arg1 ;


@end


#endif