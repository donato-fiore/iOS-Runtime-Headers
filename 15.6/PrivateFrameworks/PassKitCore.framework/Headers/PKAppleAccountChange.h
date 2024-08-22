// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLEACCOUNTCHANGE_H
#define PKAPPLEACCOUNTCHANGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAppleAccountState.h"

@interface PKAppleAccountChange : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKAppleAccountState *currentState; // ivar: _currentState
@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (readonly, nonatomic) PKAppleAccountState *previousState; // ivar: _previousState
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSInteger)changeTypeToAccount:(id)arg0 fromAccount:(id)arg1 ;
-(BOOL)didAccountManagedStateChange;
-(BOOL)didAccountOrderChange;
-(BOOL)didRelevantDataclassesChange;
-(BOOL)shouldBeNotedByPassLibrary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(NSInteger)arg0 currentAccount:(id)arg1 previousAccount:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif