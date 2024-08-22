// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEURISTICCACHECONTEXTSTOREEXPIRER_H
#define ATXHEURISTICCACHECONTEXTSTOREEXPIRER_H

@class _CDContextualKeyPath, _CDContextualPredicate, _CDContextualChangeRegistration;
@protocol NSSecureCoding;


#import "ATXHeuristicCacheExpirer.h"

@interface ATXHeuristicCacheContextStoreExpirer : ATXHeuristicCacheExpirer <NSSecureCoding>

 {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCDContextualKeyPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_start;
-(void)_stop;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif