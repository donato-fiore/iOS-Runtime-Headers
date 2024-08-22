// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLVALUE_H
#define TMLVALUE_H

@class NSString;
@protocol TMLValue;

#import <Foundation/Foundation.h>


@interface TMLValue : NSObject <TMLValue>

 {
    id *_value;
    NSUInteger _valueType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)valueType;
-(id)initWithValue:(id)arg0 valueType:(NSUInteger)arg1 ;
-(id)value;


@end


#endif