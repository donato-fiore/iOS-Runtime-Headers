// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSREADINGHISTORYMODELSNAPSHOTINFO_H
#define BDSREADINGHISTORYMODELSNAPSHOTINFO_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "BDSReadingHistoryStreakInfo.h"
#import "BDSReadingHistoryDayInfo.h"

@interface BDSReadingHistoryModelSnapshotInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger lastSource; // ivar: _lastSource
@property (nonatomic) NSInteger loaded; // ivar: _loaded
@property (retain, nonatomic) BDSReadingHistoryStreakInfo *modelLongestStreak; // ivar: _modelLongestStreak
@property (retain, nonatomic) BDSReadingHistoryDayInfo *modelReadingDay; // ivar: _modelReadingDay
@property (retain, nonatomic) BDSReadingHistoryStreakInfo *remoteModelLongestStreak; // ivar: _remoteModelLongestStreak
@property (retain, nonatomic) BDSReadingHistoryDayInfo *remoteModelReadingDay; // ivar: _remoteModelReadingDay


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLoaded:(NSInteger)arg0 lastSource:(NSInteger)arg1 modelReadingDay:(id)arg2 modelLongestStreak:(id)arg3 remoteModelReadingDay:(id)arg4 remoteModelLongestStreak:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif