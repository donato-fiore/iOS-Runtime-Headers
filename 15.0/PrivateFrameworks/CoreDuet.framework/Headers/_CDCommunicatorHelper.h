// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDCOMMUNICATORHELPER_H
#define _CDCOMMUNICATORHELPER_H


#import <Foundation/Foundation.h>


@interface _CDCommunicatorHelper : NSObject



+(id)sharedInstance;
-(NSUInteger)highestCommonVersionFor:(id)arg0 and:(id)arg1 ;
-(id)getNewThermalValueForOldValue:(id)arg0 ;
-(id)getOldThermalValueForNewValue:(id)arg0 ;


@end


#endif