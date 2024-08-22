// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSACCOUNTSLINKSPECIFIER_H
#define PSACCOUNTSLINKSPECIFIER_H



#import "PSSpecifier.h"
#import "PSAccountEnumerator.h"

@interface PSAccountsLinkSpecifier : PSSpecifier

@property (retain, nonatomic) PSAccountEnumerator *accountEnumerator; // ivar: _accountEnumerator


-(id)_accountsCount:(id)arg0 ;
-(id)initWithDetailClass:(Class)arg0 ;


@end


#endif