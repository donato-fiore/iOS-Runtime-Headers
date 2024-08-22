// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSIMPLEFORMATTEDVALUE_H
#define HFSIMPLEFORMATTEDVALUE_H

@class NSString;
@protocol HFDynamicFormattingValue, HFStringGenerator;

#import <Foundation/Foundation.h>


@interface HFSimpleFormattedValue : NSObject <HFDynamicFormattingValue>



@property (readonly, nonatomic) NSObject<HFStringGenerator> *currentFormattedValue; // ivar: _currentFormattedValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *value;


-(id)initWithFormattedValue:(id)arg0 ;
-(id)observeFormattedValueChangesWithBlock:(id)arg0 ;


@end


#endif