// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBDISPLAYPREDICATE_H
#define _SBDISPLAYPREDICATE_H

@class NSString;


#import "SBDisplayModePredicate.h"

@interface _SBDisplayPredicate : SBDisplayModePredicate {
    NSString *_displayHardwareIdentifier;
    NSString *_displayProductName;
}




+(id)fromDefaultsKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDisplay:(id)arg0 ;
-(NSUInteger)hash;
-(id)defaultsKeyRepresentation;
-(id)description;
-(id)initWithDisplay:(id)arg0 ;
-(id)initWithDisplayHardwareIdentifier:(id)arg0 productName:(id)arg1 ;


@end


#endif