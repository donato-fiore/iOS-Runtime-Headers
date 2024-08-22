// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKEVENTADAPTER_H
#define _DKEVENTADAPTER_H

@class NSDictionary, NSArray, NSNumber;

#import <Foundation/Foundation.h>

#import "_DKEvent.h"

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}


@property (retain, nonatomic) _DKEvent *dkEvent; // ivar: _dkEvent


-(BOOL)boolValue;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)confidence;
-(CGFloat)doubleValue;
-(CGFloat)valueDouble;
-(NSInteger)compatibilityVersion;
-(NSInteger)endDayOfWeek;
-(NSInteger)endSecondOfDay;
-(NSInteger)integerValue;
-(NSInteger)secondsFromGMT;
-(NSInteger)startDayOfWeek;
-(NSInteger)startSecondOfDay;
-(NSInteger)valueInteger;
-(NSInteger)valueTypeCode;
-(NSUInteger)hash;
-(id)UUID;
-(id)creationDate;
-(id)customMetadata;
-(id)endDate;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)localCreationDate;
-(id)metadata;
-(id)source;
-(id)startDate;
-(id)stream;
-(id)streamName;
-(id)stringValue;
-(id)structuredMetadata;
-(id)timeZone;
-(id)uuid;
-(id)uuidHash;
-(id)value;
-(id)valueString;
-(short)valueClass;


@end


#endif