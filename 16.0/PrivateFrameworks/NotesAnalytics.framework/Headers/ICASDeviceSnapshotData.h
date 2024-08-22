// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASDEVICESNAPSHOTDATA_H
#define ICASDEVICESNAPSHOTDATA_H

@class NSArray, NSString, NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASDeviceSnapshotData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *accountTypeSummary; // ivar: _accountTypeSummary
@property (readonly, nonatomic) NSArray *collabFoldersSummary; // ivar: _collabFoldersSummary
@property (readonly, nonatomic) NSArray *deviceSnapshotSummary; // ivar: _deviceSnapshotSummary
@property (readonly, nonatomic) NSString *saltVersion; // ivar: _saltVersion
@property (readonly, nonatomic) NSNumber *totalCountOfPinnedNotes; // ivar: _totalCountOfPinnedNotes
@property (readonly, nonatomic) NSArray *userSnapshotSummary; // ivar: _userSnapshotSummary
@property (readonly, nonatomic) NSNumber *userStartMonth; // ivar: _userStartMonth
@property (readonly, nonatomic) NSNumber *userStartYear; // ivar: _userStartYear


+(id)dataName;
-(id)initWithUserStartMonth:(id)arg0 userStartYear:(id)arg1 saltVersion:(id)arg2 accountTypeSummary:(id)arg3 collabFoldersSummary:(id)arg4 totalCountOfPinnedNotes:(id)arg5 deviceSnapshotSummary:(id)arg6 userSnapshotSummary:(id)arg7 ;
-(id)toDict;


@end


#endif