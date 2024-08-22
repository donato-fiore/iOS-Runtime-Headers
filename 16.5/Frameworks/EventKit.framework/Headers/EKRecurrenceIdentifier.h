// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKRECURRENCEIDENTIFIER_H
#define EKRECURRENCEIDENTIFIER_H

@class NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EKRecurrenceIdentifier : NSObject <NSCopying>



@property (retain, nonatomic) NSString *identifierString; // ivar: _identifierString
@property (retain) NSString *localUID; // ivar: _localUID
@property (retain) NSDate *recurrenceDate; // ivar: _recurrenceDate


+(BOOL)_splitIdentifier:(id)arg0 intoLocalUID:(*id)arg1 recurrenceDate:(*id)arg2 ;
+(char *)_dateFormatStripTime:(BOOL)arg0 stripTimeZone:(BOOL)arg1 ;
+(id)_recurrenceIdentifierWithRecurrenceDate:(id)arg0 localUID:(id)arg1 stripTime:(BOOL)arg2 stripTimeZone:(BOOL)arg3 ;
+(id)_recurrenceStringForDate:(id)arg0 stripTime:(BOOL)arg1 stripTimeZone:(BOOL)arg2 ;
+(id)localUIDForIdentifierString:(id)arg0 ;
+(id)recurrenceIdentifierWithLocalUID:(id)arg0 recurrenceDate:(id)arg1 ;
+(id)recurrenceIdentifierWithString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif