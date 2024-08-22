// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCFGCHARACTERSEQUENCETERMINAL_H
#define _HKCFGCHARACTERSEQUENCETERMINAL_H

@class HKCFGTerminal, NSCharacterSet;



@interface _HKCFGCharacterSequenceTerminal : HKCFGTerminal

@property (copy, nonatomic) NSCharacterSet *characterSet; // ivar: _characterSet


-(BOOL)_scanValue:(*id)arg0 withScanner:(id)arg1 ;
-(NSUInteger)_minimumLength;
-(id)_label;


@end


#endif