// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWLFLDVARIABLECHANGERECORD_H
#define _UIVIEWLFLDVARIABLECHANGERECORD_H

@class UIViewLFLDChangeRecord, NSISVariable;


#import "UIView.h"

@interface _UIViewLFLDVariableChangeRecord : UIViewLFLDChangeRecord

@property (readonly, nonatomic) CGFloat value; // ivar: _value
@property (readonly, nonatomic) NSISVariable *variable; // ivar: _variable
@property (readonly, nonatomic) UIView *variableDelegate; // ivar: _variableDelegate


-(id)description;
-(id)initWithVariable:(id)arg0 inLayoutEngine:(id)arg1 ;


@end


#endif