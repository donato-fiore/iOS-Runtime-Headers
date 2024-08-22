// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECHEADERAUTHENTICATIONRESULTS_H
#define ECHEADERAUTHENTICATIONRESULTS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ECHeaderAuthenticationResults : NSObject

@property (readonly, copy, nonatomic) NSString *authenticationServiceIdentifier; // ivar: _authenticationServiceIdentifier
@property (readonly, copy, nonatomic) NSArray *statements; // ivar: _statements
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(id)authenticationResultsForHeaders:(id)arg0 ;
-(id)firstStatementForMethod:(id)arg0 ;
-(id)initWithAuthenticationServiceIdentifier:(id)arg0 version:(NSInteger)arg1 statements:(id)arg2 ;


@end


#endif