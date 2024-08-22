// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKMOONPHASETIMELINEENTRYMODEL_H
#define NTKMOONPHASETIMELINEENTRYMODEL_H

@class NSString, NSDate;


#import "NTKTimelineEntryModel.h"

@interface NTKMoonPhaseTimelineEntryModel : NTKTimelineEntryModel

@property (retain, nonatomic) NSString *animationGroup; // ivar: _animationGroup
@property (nonatomic) BOOL currentEvent; // ivar: _currentEvent
@property (nonatomic) NSInteger event; // ivar: _event
@property (retain, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (nonatomic) NSInteger hemisphere; // ivar: _hemisphere
@property (retain, nonatomic) NSString *phaseName; // ivar: _phaseName
@property (nonatomic) NSUInteger phaseNumber; // ivar: _phaseNumber


+(id)circular:(id)arg0 isMedium:(BOOL)arg1 ;
+(id)extraLarge:(id)arg0 ;
+(id)imageProviderWithOnePieceImage:(id)arg0 ;
+(id)largeModular:(id)arg0 ;
+(id)largeUtility:(id)arg0 ;
+(id)providerWithText:(id)arg0 ;
+(id)smallModular:(id)arg0 ;
+(id)smallUtility:(id)arg0 ;
+(id)textForMoonPhaseEvent:(NSInteger)arg0 ;
+(id)textForMoonPhaseEvent:(NSInteger)arg0 useShort:(BOOL)arg1 ;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif