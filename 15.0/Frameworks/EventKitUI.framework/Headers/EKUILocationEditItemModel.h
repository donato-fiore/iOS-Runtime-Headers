// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUILOCATIONEDITITEMMODEL_H
#define EKUILOCATIONEDITITEMMODEL_H

@class NSMutableDictionary, NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "EKUILocationRowModel.h"

@interface EKUILocationEditItemModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *conferenceRoomInfos; // ivar: _conferenceRoomInfos
@property (readonly, nonatomic) BOOL displaysPlaceholder;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (readonly, nonatomic) BOOL hasVirtualConference;
@property (readonly, nonatomic) EKUILocationRowModel *mapLocationRowModel;
@property (readonly, nonatomic) NSString *placeholderCellText;
@property (retain, nonatomic) NSMutableArray *rowModels; // ivar: _rowModels
@property (nonatomic) BOOL sourceSupportsAvailabilityRequests; // ivar: _sourceSupportsAvailabilityRequests
@property (readonly, nonatomic) EKUILocationRowModel *virtualConferenceRowModel;


-(BOOL)rowModelRepresentsConferenceRoom:(id)arg0 onEvent:(id)arg1 ;
-(BOOL)shouldDisplayRowModelWithConferenceCell:(id)arg0 event:(id)arg1 ;
-(NSInteger)indexOfPredictedLocation;
-(id)_conferenceRoomNameForLocation:(id)arg0 ;
-(id)_participantForConferenceRoomName:(id)arg0 event:(id)arg1 ;
-(id)_rowModelForCell:(id)arg0 ;
-(id)init;
-(void)_removeConferenceAttendeeOnEvent:(id)arg0 forRowModel:(id)arg1 ;
-(void)_updateConferenceDataOnEvent:(id)arg0 forNewLocation:(id)arg1 ;
-(void)_updateLocationsOnEvent:(id)arg0 ;
-(void)rebuild:(id)arg0 ;
-(void)refreshConferenceRoomCell:(id)arg0 ;
-(void)removeConferenceRoomAttendeeIfNeeded:(id)arg0 event:(id)arg1 ;
-(void)removeRowModel:(id)arg0 event:(id)arg1 ;
-(void)removeRowModelAtIndex:(NSUInteger)arg0 event:(id)arg1 ;
-(void)reorderRowModels;
-(void)reset;
-(void)updateAvailabilityInformation:(id)arg0 ;
-(void)updateRowModel:(id)arg0 withConferenceRoom:(id)arg1 editItem:(id)arg2 ;
-(void)updateRowModel:(id)arg0 withMapLocation:(id)arg1 event:(id)arg2 ;
-(void)updateRowModel:(id)arg0 withVirtualConference:(id)arg1 event:(id)arg2 ;


@end


#endif