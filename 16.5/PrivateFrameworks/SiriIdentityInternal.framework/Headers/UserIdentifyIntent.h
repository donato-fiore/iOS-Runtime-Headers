// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USERIDENTIFYINTENT_H
#define USERIDENTIFYINTENT_H

@class INIntent;


#import "Identity.h"

@interface UserIdentifyIntent : INIntent

@property (nonatomic) NSInteger caseType;
@property (nonatomic, retain) Identity *identity;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif