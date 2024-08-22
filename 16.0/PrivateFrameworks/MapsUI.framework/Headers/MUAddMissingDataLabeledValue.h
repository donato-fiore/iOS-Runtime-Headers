// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUADDMISSINGDATALABELEDVALUE_H
#define MUADDMISSINGDATALABELEDVALUE_H

@class NSString;
@protocol MULabeledValueActionViewModelProviding;

#import <Foundation/Foundation.h>


@interface MUAddMissingDataLabeledValue : NSObject <MULabeledValueActionViewModelProviding>



@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (nonatomic) NSInteger actionVariant; // ivar: _actionVariant
@property (retain, nonatomic) NSString *alternativeTitleString; // ivar: _alternativeTitleString
@property (readonly, nonatomic) int analyticAction; // ivar: _analyticAction
@property (nonatomic) int analyticsTarget; // ivar: _analyticsTarget
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL emphasizeValueString; // ivar: _emphasizeValueString
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (retain, nonatomic) NSString *titleString; // ivar: _titleString
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSString *valueString; // ivar: _valueString


-(id)analyticsButtonValue;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif