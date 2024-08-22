// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSMESSAGESPINNINGUTILITIES_H
#define _PSMESSAGESPINNINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface _PSMessagesPinningUtilities : NSObject



+(id)actionTypeToString:(NSInteger)arg0 ;
+(id)chatGuidsFromSuggestions:(id)arg0 ;
+(id)dateToString:(id)arg0 ;
+(id)interactionMethodToString:(NSInteger)arg0 ;
+(id)intersectionsOfActualPinnings:(id)arg0 fromTopN:(NSUInteger)arg1 suggestions:(id)arg2 ;
+(id)startOfDayForDate:(id)arg0 ;
+(id)suggestionsToString:(id)arg0 ;


@end


#endif