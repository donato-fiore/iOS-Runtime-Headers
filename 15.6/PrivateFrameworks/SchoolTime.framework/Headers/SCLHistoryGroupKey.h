// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLHISTORYGROUPKEY_H
#define SCLHISTORYGROUPKEY_H

@class NSCalendar, NSDate;

#import <Foundation/Foundation.h>


@interface SCLHistoryGroupKey : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSDate *referenceDate; // ivar: _referenceDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCalendar:(id)arg0 referenceDate:(id)arg1 ;


@end


#endif