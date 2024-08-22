// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSREADINGHISTORYSTREAKINFO_H
#define BDSREADINGHISTORYSTREAKINFO_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BDSReadingHistoryStreakInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) NSInteger length; // ivar: _length


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndDate:(id)arg0 length:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif