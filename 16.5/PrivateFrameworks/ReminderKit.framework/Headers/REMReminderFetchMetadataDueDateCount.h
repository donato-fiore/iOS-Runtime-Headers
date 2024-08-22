// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREMINDERFETCHMETADATADUEDATECOUNT_H
#define REMREMINDERFETCHMETADATADUEDATECOUNT_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface REMReminderFetchMetadataDueDateCount : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) NSDate *dueDate; // ivar: _dueDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDueDate:(id)arg0 count:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif