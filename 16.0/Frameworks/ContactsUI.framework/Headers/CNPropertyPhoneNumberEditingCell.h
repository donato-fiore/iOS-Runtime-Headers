// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYPHONENUMBEREDITINGCELL_H
#define CNPROPERTYPHONENUMBEREDITINGCELL_H

@class NSArray;


#import "CNPropertySimpleEditingCell.h"

@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell

@property (retain, nonatomic) NSArray *previousValue; // ivar: _previousValue


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct ? )suggestionsForString:(id)arg0 inputIndex:(unsigned int)arg1 ;


@end


#endif