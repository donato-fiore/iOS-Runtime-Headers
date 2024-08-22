// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSREMOTEHISTORYSESSION_H
#define WBSREMOTEHISTORYSESSION_H

@class NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSRemoteHistorySession : NSObject <NSSecureCoding>



@property (readonly, getter=isCurrentSession) BOOL currentSession;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 items:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif