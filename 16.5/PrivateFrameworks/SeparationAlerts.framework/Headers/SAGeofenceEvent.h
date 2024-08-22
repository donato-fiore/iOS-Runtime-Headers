// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGEOFENCEEVENT_H
#define SAGEOFENCEEVENT_H

@class NSString, NSDate, CLRegion;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>


@interface SAGeofenceEvent : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CLRegion *region; // ivar: _region
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegion:(id)arg0 eventType:(NSUInteger)arg1 eventDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif