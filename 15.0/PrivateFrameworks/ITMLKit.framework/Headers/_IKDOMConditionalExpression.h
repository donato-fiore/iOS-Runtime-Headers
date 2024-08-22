// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IKDOMCONDITIONALEXPRESSION_H
#define _IKDOMCONDITIONALEXPRESSION_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface _IKDOMConditionalExpression : NSObject {
    BOOL _isNegated;
    NSArray *_operations;
}


@property (readonly, copy, nonatomic) NSSet *dependentPathStrings; // ivar: _dependentPathStrings


+(id)expressionFromString:(id)arg0 ;
+(id)parseExpressionsFromString:(id)arg0 ;
-(BOOL)passesForDataItem:(id)arg0 ;
-(id)initWithOperations:(id)arg0 dependentPathStrings:(id)arg1 isNegated:(BOOL)arg2 ;


@end


#endif