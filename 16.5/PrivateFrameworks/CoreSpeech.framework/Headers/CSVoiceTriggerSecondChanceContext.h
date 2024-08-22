// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERSECONDCHANCECONTEXT_H
#define CSVOICETRIGGERSECONDCHANCECONTEXT_H


#import <Foundation/Foundation.h>


@interface CSVoiceTriggerSecondChanceContext : NSObject

@property (nonatomic) NSUInteger secondChanceHotTillMachTime; // ivar: _secondChanceHotTillMachTime


-(BOOL)shouldRunAsSecondChance;
-(id)initWithWindowStartTime:(NSUInteger)arg0 ;


@end


#endif