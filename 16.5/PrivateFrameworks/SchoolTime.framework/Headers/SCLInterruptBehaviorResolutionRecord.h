// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLINTERRUPTBEHAVIORRESOLUTIONRECORD_H
#define SCLINTERRUPTBEHAVIORRESOLUTIONRECORD_H

@class NSUUID, NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SCLInterruptEventBehavior.h"

@interface SCLInterruptBehaviorResolutionRecord : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) SCLInterruptEventBehavior *eventBehavior; // ivar: _eventBehavior


+(id)resolutionRecordForDate:(id)arg0 eventBehavior:(id)arg1 clientIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUUID:(id)arg0 date:(id)arg1 eventBehavior:(id)arg2 clientIdentifier:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif