// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFEVENT_H
#define CWFEVENT_H

@class NSUUID, NSDictionary, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CWFEventID.h"

@interface CWFEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) id *acknowledge; // ivar: _acknowledge
@property (nonatomic) NSUInteger acknowledgementTimeout; // ivar: _acknowledgementTimeout
@property (copy, nonatomic) CWFEventID *eventID; // ivar: _eventID
@property (copy, nonatomic) NSDictionary *info; // ivar: _info
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif