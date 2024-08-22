// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSFTZKWCONFIG_H
#define _PSFTZKWCONFIG_H


#import <Foundation/Foundation.h>

#import "_PSZKWFTCalendarEventConfig.h"
#import "_PSZKWFTPrimaryInteractionsConfig.h"
#import "_PSZKWFTFallbackInteractionsConfig.h"
#import "_PSZKWFTUnstructuredCalendarConfig.h"
#import "_PSZKWFTUnstructuredRemindersConfig.h"

@interface _PSFTZKWConfig : NSObject

@property (readonly, copy, nonatomic) _PSZKWFTCalendarEventConfig *calendarEventConfig; // ivar: _calendarEventConfig
@property (readonly, copy, nonatomic) _PSZKWFTPrimaryInteractionsConfig *faceTimeInteractionsConfig; // ivar: _faceTimeInteractionsConfig
@property (readonly, copy, nonatomic) _PSZKWFTFallbackInteractionsConfig *fallbackInteractionsConfig; // ivar: _fallbackInteractionsConfig
@property (readonly, copy, nonatomic) _PSZKWFTUnstructuredCalendarConfig *unstructuredCalendarConfig; // ivar: _unstructuredCalendarConfig
@property (readonly, copy, nonatomic) _PSZKWFTUnstructuredRemindersConfig *unstructuredRemindersConfig; // ivar: _unstructuredRemindersConfig
@property (readonly, nonatomic) BOOL useBlendingLayer; // ivar: _useBlendingLayer


+(BOOL)onNonUIBuild;
-(id)init;
-(id)initWithTrialData:(id)arg0 ;


@end


#endif