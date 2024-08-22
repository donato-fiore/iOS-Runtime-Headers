// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SWCSUBSTITUTIONVARIABLELIST_H
#define _SWCSUBSTITUTIONVARIABLELIST_H

@protocol SWCRedactedDescription, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SWCSubstitutionVariableList : NSObject <SWCRedactedDescription, NSSecureCoding>

 {
    SWCSubstitutionVariable _variables;
}


@property (readonly) NSUInteger count;


+(BOOL)supportsSecureCoding;
+(id)cheapBuiltInSubstitutionVariableList;
+(id)expensiveBuiltInSubstitutionVariableList;
+(id)substitutionVariableListWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionDebug:(BOOL)arg0 redacted:(BOOL)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateSubstitutionVariablesWithBlock:(id)arg0 ;


@end


#endif