// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSREADINGHISTORYDAYENTRYINFO_H
#define BDSREADINGHISTORYDAYENTRYINFO_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "BDSReadingHistoryDayInfo.h"

@interface BDSReadingHistoryDayEntryInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *date; // ivar: _date
@property (retain, nonatomic) BDSReadingHistoryDayInfo *day; // ivar: _day


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 day:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif