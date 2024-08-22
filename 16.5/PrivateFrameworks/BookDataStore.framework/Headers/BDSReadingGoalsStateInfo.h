// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BDSREADINGGOALSSTATEINFO_H
#define BDSREADINGGOALSSTATEINFO_H

@class NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BDSReadingGoalsStateInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSNumber *booksFinishedGoal; // ivar: _booksFinishedGoal
@property (retain, nonatomic) NSNumber *streakDayGoal; // ivar: _streakDayGoal


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBooksFinishedGoal:(id)arg0 streakDayGoal:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif