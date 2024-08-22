// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKALARMTIMELINEENTRY_H
#define NTKALARMTIMELINEENTRY_H

@class CLKDevice, NSString, NSDate;


#import "NTKTimelineEntryModel.h"

@interface NTKAlarmTimelineEntry : NTKTimelineEntryModel {
    CLKDevice *_device;
}


@property (retain, nonatomic) NSString *alarmLabel; // ivar: _alarmLabel
@property (nonatomic) NSUInteger entryType; // ivar: _entryType
@property (retain, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (retain, nonatomic) NSDate *snoozeDate; // ivar: _snoozeDate


+(id)companionModelWithDevice:(id)arg0 ;
-(BOOL)_pairedDeviceSupportsComplicationSymbols;
-(id)_activeStateTimeRelativeDateTextProvider;
-(id)_activeStateTimeTextProvider;
-(id)_circularTemplateForAlarm:(BOOL)arg0 ;
-(id)_extraLargeAlarmInactiveImageProvider;
-(id)_getAlarmImageProviderWithActiveStatus:(BOOL)arg0 ;
-(id)_largeUtilityInactiveImageProvider;
-(id)_modularSmallAlarmInactiveImageProvider;
-(id)_newCircularMediumTemplate;
-(id)_newCircularSmallTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newLargeModularTemplate;
-(id)_newLargeUtilityTemplate;
-(id)_newSignatureBezelTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newSignatureCornerTemplate;
-(id)_newSignatureExtraLargeCircularTemplate;
-(id)_newSignatureRectangularTemplate;
-(id)_newSmallFlatUtilityTemplate;
-(id)_newSmallModularTemplate;
-(id)_richCircularMetadata;
-(id)_snoozeStateDateTextProvider;
-(id)description;
-(id)initWithDevice:(id)arg0 ;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;
-(void)_makeAlarmStackTextTimeProvider:(*id)arg0 designatorProvider:(*id)arg1 designatorExists:(*BOOL)arg2 designatorLeads:(*BOOL)arg3 ;


@end


#endif