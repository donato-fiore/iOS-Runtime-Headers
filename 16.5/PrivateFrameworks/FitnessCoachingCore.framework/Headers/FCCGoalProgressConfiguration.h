// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCGOALPROGRESSCONFIGURATION_H
#define FCCGOALPROGRESSCONFIGURATION_H

@class NSString, NSDate;
@protocol FCCDataSerializable;

#import <Foundation/Foundation.h>

#import "FCCAlmostThereConfiguration.h"
#import "FCCAtypicalDayConfiguration.h"
#import "FCCCompletionOffTrackConfiguration.h"

@interface FCCGoalProgressConfiguration : NSObject <FCCDataSerializable>



@property (readonly, nonatomic) FCCAlmostThereConfiguration *almostThereConfiguration; // ivar: _almostThereConfiguration
@property (readonly, nonatomic) FCCAtypicalDayConfiguration *atypicalDayConfiguration; // ivar: _atypicalDayConfiguration
@property (readonly, nonatomic) FCCCompletionOffTrackConfiguration *completionOffTrackConfiguration; // ivar: _completionOffTrackConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger minimumNumberOfActiveDays; // ivar: _minimumNumberOfActiveDays
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *userEndOfDay; // ivar: _userEndOfDay
@property (readonly, nonatomic) NSDate *userStartOfDay; // ivar: _userStartOfDay


-(id)initWithMinimumNumberOfActiveDays:(NSInteger)arg0 userStartOfDay:(id)arg1 userEndOfDay:(id)arg2 expirationDate:(id)arg3 almostThereConfiguration:(id)arg4 atypicalDayConfiguration:(id)arg5 completionOffTrackConfiguration:(id)arg6 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)protobuf;
-(id)transportData;


@end


#endif