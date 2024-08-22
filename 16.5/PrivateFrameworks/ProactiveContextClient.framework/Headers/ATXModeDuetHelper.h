// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEDUETHELPER_H
#define ATXMODEDUETHELPER_H


#import <Foundation/Foundation.h>


@interface ATXModeDuetHelper : NSObject



-(id)_duetStreamShim;
-(id)_updateModeStreamEndDates:(id)arg0 to:(id)arg1 ;
-(id)modeStreamFrom:(id)arg0 to:(id)arg1 ascending:(BOOL)arg2 limit:(NSUInteger)arg3 ;
-(id)modeStreamFrom:(id)arg0 to:(id)arg1 limit:(NSUInteger)arg2 ;


@end


#endif