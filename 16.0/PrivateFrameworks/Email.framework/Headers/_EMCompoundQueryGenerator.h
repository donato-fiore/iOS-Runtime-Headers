// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EMCOMPOUNDQUERYGENERATOR_H
#define _EMCOMPOUNDQUERYGENERATOR_H

@class NSString;
@protocol EMSearchableIndexQueryGenerator;

#import <Foundation/Foundation.h>


@interface _EMCompoundQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)operandFromPredicate:(id)arg0 ;
-(id)queryExpressionFromPredicate:(id)arg0 propertyMapper:(id)arg1 languages:(id)arg2 ;


@end


#endif