// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSUPGRADEEXPRESSAUTOMATICSELECTIONCRITERIAREQUEST_H
#define PKPASSUPGRADEEXPRESSAUTOMATICSELECTIONCRITERIAREQUEST_H

@class NSArray;


#import "PKPassUpgradeRequest.h"

@interface PKPassUpgradeExpressAutomaticSelectionCriteriaRequest : PKPassUpgradeRequest

@property (readonly, nonatomic) NSArray *technologyTypes; // ivar: _technologyTypes


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif