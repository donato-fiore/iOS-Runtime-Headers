// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRESTRICTIONCONDITION_H
#define SSRESTRICTIONCONDITION_H

@class NSString;


#import "SSProtocolCondition.h"

@interface SSRestrictionCondition : SSProtocolCondition {
    NSString *_restrictionName;
}




-(BOOL)evaluateWithContext:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif