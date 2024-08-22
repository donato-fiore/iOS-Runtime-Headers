// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHPREDICATEEXPRESSIONVALIDATIONRESULT_H
#define ACHPREDICATEEXPRESSIONVALIDATIONRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ACHPredicateExpressionValidationResult : NSObject

@property (readonly, retain, nonatomic) NSArray *issues; // ivar: _issues
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(id)initWithValid:(BOOL)arg0 issues:(id)arg1 ;


@end


#endif