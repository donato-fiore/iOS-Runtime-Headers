// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEPOLICY_H
#define NEPOLICY_H

@class NSArray;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>

#import "NEPolicyResult.h"

@interface NEPolicy : NSObject <NEPrettyDescription>



@property (copy) NSArray *conditions; // ivar: _conditions
@property unsigned int order; // ivar: _order
@property (retain) NEPolicyResult *result; // ivar: _result


-(BOOL)addTLVsToMessage:(id)arg0 ;
-(BOOL)validate;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithOrder:(unsigned int)arg0 result:(id)arg1 conditions:(id)arg2 ;


@end


#endif