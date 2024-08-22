// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASLOCKEDNOTESITEMDATA_H
#define ICASLOCKEDNOTESITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASLockedNotesItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *totalCountOfLockedNotesWithDivergedMode; // ivar: _totalCountOfLockedNotesWithDivergedMode
@property (readonly, nonatomic) NSNumber *totalCountOfLockedNotesWithDivergedPassword; // ivar: _totalCountOfLockedNotesWithDivergedPassword
@property (readonly, nonatomic) NSNumber *totalCountOfV1LockedNotes; // ivar: _totalCountOfV1LockedNotes
@property (readonly, nonatomic) NSNumber *totalCountOfV2LockedNotes; // ivar: _totalCountOfV2LockedNotes


+(id)dataName;
-(id)initWithTotalCountOfV1LockedNotes:(id)arg0 totalCountOfV2LockedNotes:(id)arg1 totalCountOfLockedNotesWithDivergedMode:(id)arg2 totalCountOfLockedNotesWithDivergedPassword:(id)arg3 ;
-(id)toDict;


@end


#endif