// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTRAFFICSUPPORT_H
#define MKTRAFFICSUPPORT_H


#import <Foundation/Foundation.h>


@interface MKTrafficSupport : NSObject



+(id)sharedTrafficSupport;
-(NSInteger)_convertType:(int)arg0 ;
-(id)localizedRAPDescriptionForGEOIncidentType:(int)arg0 ;
-(id)localizedReportConfirmationForIncidentType:(int)arg0 ;
-(id)localizedReportedByYouForGEOIncidentType:(int)arg0 ;
-(id)localizedSubtitleForStreet:(id)arg0 crossStreet:(id)arg1 ;
-(id)localizedTitleForGEOIncidentType:(int)arg0 laneType:(int)arg1 laneCount:(NSUInteger)arg2 ;
-(id)localizedTitleForIncidentType:(NSInteger)arg0 laneType:(NSInteger)arg1 laneCount:(NSUInteger)arg2 ;
-(void)setupTrafficIncidents;


@end


#endif