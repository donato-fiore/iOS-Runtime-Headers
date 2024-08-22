// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EMCOMPARISIONQUERYGENERATOR_H
#define _EMCOMPARISIONQUERYGENERATOR_H

@class NSString;
@protocol EMSearchableIndexQueryGenerator;

#import <Foundation/Foundation.h>


@interface _EMComparisionQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_modifiersForPredicate:(id)arg0 ;
-(id)_attributesForPredicate:(id)arg0 propertyMapper:(id)arg1 ;
-(id)_comparisonOperatorForPredicate:(id)arg0 ;
-(id)_patternMatchStringForPredicate:(id)arg0 ;
-(id)queryExpressionFromPredicate:(id)arg0 propertyMapper:(id)arg1 languages:(id)arg2 ;


@end


#endif