// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSREADINGHISTORYSTATEINFO_H
#define BDSREADINGHISTORYSTATEINFO_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "BDSReadingHistoryStreakInfo.h"
#import "BDSReadingHistoryDayInfo.h"

@interface BDSReadingHistoryStateInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger currentStreak; // ivar: _currentStreak
@property (retain, nonatomic) BDSReadingHistoryStreakInfo *longestStreak; // ivar: _longestStreak
@property (retain, nonatomic) NSArray *readingHistory; // ivar: _readingHistory
@property (retain, nonatomic) BDSReadingHistoryDayInfo *today; // ivar: _today


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentStreak:(NSInteger)arg0 longestStreak:(id)arg1 today:(id)arg2 readingHistory:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif