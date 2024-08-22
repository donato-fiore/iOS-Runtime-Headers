// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAPREDICATEVALIDATOR_H
#define PHAPREDICATEVALIDATOR_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface PHAPredicateValidator : NSObject

@property (retain) NSSet *allowedKeyPaths; // ivar: _allowedKeyPaths


-(BOOL)validateExpression:(id)arg0 error:(*id)arg1 ;
-(BOOL)validatePredicate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateValue:(id)arg0 error:(*id)arg1 ;


@end


#endif