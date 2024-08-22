// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPSEARCHCONSTRAINT_H
#define SAMPSEARCHCONSTRAINT_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAMPSearchConstraint : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *mediaPlayerOrderingTerms;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSArray *searchProperties;
@property (readonly) Class superclass;


+(id)searchConstraint;
+(id)searchConstraintWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif