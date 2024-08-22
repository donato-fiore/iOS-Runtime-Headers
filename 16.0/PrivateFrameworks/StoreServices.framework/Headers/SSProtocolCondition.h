// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPROTOCOLCONDITION_H
#define SSPROTOCOLCONDITION_H


#import <Foundation/Foundation.h>


@interface SSProtocolCondition : NSObject {
    NSInteger _operator;
    id *_value;
}




+(id)newConditionWithDictionary:(id)arg0 ;
-(BOOL)evaluateWithContext:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif