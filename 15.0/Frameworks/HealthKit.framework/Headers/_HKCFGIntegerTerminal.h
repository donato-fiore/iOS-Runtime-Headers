// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCFGINTEGERTERMINAL_H
#define _HKCFGINTEGERTERMINAL_H

@class HKCFGTerminal;



@interface _HKCFGIntegerTerminal : HKCFGTerminal

@property (copy, nonatomic) id *condition; // ivar: _condition


-(BOOL)_scanValue:(*id)arg0 withScanner:(id)arg1 ;
-(NSUInteger)_minimumLength;
-(id)_label;
-(id)characterSet;


@end


#endif