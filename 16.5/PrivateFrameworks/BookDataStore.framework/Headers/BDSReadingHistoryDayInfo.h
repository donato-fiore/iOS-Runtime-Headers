// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BDSREADINGHISTORYDAYINFO_H
#define BDSREADINGHISTORYDAYINFO_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BDSReadingHistoryDayInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger goal; // ivar: _goal
@property (nonatomic) BOOL isStreakDay; // ivar: _isStreakDay
@property (nonatomic) NSInteger readingTime; // ivar: _readingTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReadingTime:(NSInteger)arg0 goal:(NSInteger)arg1 isStreakDay:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif