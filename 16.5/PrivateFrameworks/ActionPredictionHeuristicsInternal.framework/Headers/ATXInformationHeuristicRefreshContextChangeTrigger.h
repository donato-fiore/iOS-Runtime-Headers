// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINFORMATIONHEURISTICREFRESHCONTEXTCHANGETRIGGER_H
#define ATXINFORMATIONHEURISTICREFRESHCONTEXTCHANGETRIGGER_H

@class _CDContextualKeyPath, _CDContextualPredicate, _CDContextualChangeRegistration, NSString;
@protocol NSSecureCoding;


#import "ATXInformationHeuristicRefreshTrigger.h"

@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding>

 {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
    NSString *_registrationIdentifier;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCDContextualKeyPath:(id)arg0 ;
-(id)initWithCDContextualKeyPath:(id)arg0 equalToValue:(id)arg1 withMinimumDurationInPreviousState:(CGFloat)arg2 ;
-(id)initWithCDContextualKeyPath:(id)arg0 predicate:(id)arg1 registrationIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_start;
-(void)_stop;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif