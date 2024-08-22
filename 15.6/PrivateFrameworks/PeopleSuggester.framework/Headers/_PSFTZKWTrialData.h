// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSFTZKWTRIALDATA_H
#define _PSFTZKWTRIALDATA_H

@class TRIExperimentIdentifiers, TRIRolloutIdentifiers;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _PSFTZKWTrialData : NSObject <NSCopying>



@property (copy, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers; // ivar: _experimentIdentifiers
@property (nonatomic) NSInteger fallbackInteractionsDefaultConfidenceCategory; // ivar: _fallbackInteractionsDefaultConfidenceCategory
@property (nonatomic) BOOL fallbackInteractionsIsEnabled; // ivar: _fallbackInteractionsIsEnabled
@property (nonatomic) NSInteger fallbackInteractionsModelType; // ivar: _fallbackInteractionsModelType
@property (nonatomic) NSInteger primaryInteractionsDefaultConfidenceCategory; // ivar: _primaryInteractionsDefaultConfidenceCategory
@property (nonatomic) BOOL primaryInteractionsIsEnabled; // ivar: _primaryInteractionsIsEnabled
@property (nonatomic) NSInteger primaryInteractionsModelType; // ivar: _primaryInteractionsModelType
@property (copy, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers; // ivar: _rolloutIdentifiers
@property (nonatomic) NSInteger structuredCalendarDefaultConfidenceCategory; // ivar: _structuredCalendarDefaultConfidenceCategory
@property (nonatomic) BOOL structuredCalendarIsEnabled; // ivar: _structuredCalendarIsEnabled
@property (nonatomic) NSInteger unstructuredCalendarDefaultConfidenceCategory; // ivar: _unstructuredCalendarDefaultConfidenceCategory
@property (nonatomic) BOOL unstructuredCalendarIsEnabled; // ivar: _unstructuredCalendarIsEnabled
@property (nonatomic) NSInteger unstructuredRemindersDefaultConfidenceCategory; // ivar: _unstructuredRemindersDefaultConfidenceCategory
@property (nonatomic) BOOL unstructuredRemindersIsEnabled; // ivar: _unstructuredRemindersIsEnabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif