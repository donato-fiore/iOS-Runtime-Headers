// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSEARCHTRANSACTIONREWARDSRESULT_H
#define PKSEARCHTRANSACTIONREWARDSRESULT_H

@class NSString, NSDecimalNumber;
@protocol PKSearchAutocompleteToken;

#import <Foundation/Foundation.h>


@interface PKSearchTransactionRewardsResult : NSObject <PKSearchAutocompleteToken>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDecimalNumber *rewardsValue; // ivar: _rewardsValue
@property (nonatomic) NSUInteger rewardsValueUnit; // ivar: _rewardsValueUnit
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)tokenType;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif