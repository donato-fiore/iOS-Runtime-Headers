// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADEVICESWITHSAFELOCATIONSEVENT_H
#define SADEVICESWITHSAFELOCATIONSEVENT_H

@class NSDate, NSString, NSDictionary;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>


@interface SADevicesWithSafeLocationsEvent : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *devices; // ivar: _devices
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *safeLocations; // ivar: _safeLocations
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevices:(id)arg0 safeLocationUUIDs:(id)arg1 date:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif