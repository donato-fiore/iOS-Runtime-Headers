// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPROPERTYINTENTACTIONABLECELL_H
#define CNPROPERTYINTENTACTIONABLECELL_H

@class NSArray;


#import "CNPropertySimpleTransportCell.h"

@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) NSArray *actions; // ivar: _actions


-(BOOL)shouldPerformDefaultAction;
-(id)defaultContext;
-(id)transportsMapping;
-(void)performDefaultAction;
-(void)transportButton1Clicked:(id)arg0 ;
-(void)transportButton2Clicked:(id)arg0 ;
-(void)transportButton3Clicked:(id)arg0 ;
-(void)updateTransportButtons;


@end


#endif