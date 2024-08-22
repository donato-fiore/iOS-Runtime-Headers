// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADEVICEUPDATEEVENT_H
#define SADEVICEUPDATEEVENT_H

@class NSDate, NSString;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>

#import "SADevice.h"

@interface SADeviceUpdateEvent : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) SADevice *device; // ivar: _device
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL lastEvent; // ivar: _lastEvent
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 eventType:(NSUInteger)arg1 lastEvent:(BOOL)arg2 date:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif