// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPLACEHOLDERPASSCONFIGURATION_H
#define PKPLACEHOLDERPASSCONFIGURATION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPassAutomaticSelectionCriterion.h"
#import "PKAppletSubcredential.h"

@interface PKPlaceholderPassConfiguration : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *associatedApplicationIdentifiers; // ivar: _associatedApplicationIdentifiers
@property (readonly, nonatomic) PKPassAutomaticSelectionCriterion *automaticSelectionCriterion; // ivar: _automaticSelectionCriterion
@property (copy, nonatomic) NSArray *passFields; // ivar: _passFields
@property (readonly, nonatomic) NSInteger paymentApplicationState; // ivar: _paymentApplicationState
@property (readonly, nonatomic) PKAppletSubcredential *subcredential; // ivar: _subcredential


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubcredential:(id)arg0 automaticSelectionCriterion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif