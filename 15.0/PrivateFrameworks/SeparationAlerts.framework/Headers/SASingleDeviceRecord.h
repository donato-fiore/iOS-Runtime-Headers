// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASINGLEDEVICERECORD_H
#define SASINGLEDEVICERECORD_H

@class NSDate, TASPAdvertisement, NSUUID, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SADevice.h"

@interface SASingleDeviceRecord : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (retain, nonatomic) SADevice *device; // ivar: _device
@property (nonatomic) BOOL hasSurfacedNotification; // ivar: _hasSurfacedNotification
@property (readonly) BOOL isConnected;
@property (readonly, nonatomic) NSDate *lastWithYouDate; // ivar: _lastWithYouDate
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // ivar: _latestAdvertisement
@property (nonatomic) NSUInteger notificationState; // ivar: _notificationState
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSMutableArray *uuidsOfRelatedDevices; // ivar: _uuidsOfRelatedDevices
@property (nonatomic) NSUInteger withYouStatus; // ivar: _withYouStatus


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConnectionEvent:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertRelatedDevice:(id)arg0 ;
-(void)resetRelatedDevices;
-(void)updateLastWithYouDate:(id)arg0 ;
-(void)updateLatestAdvertisement:(id)arg0 ;
-(void)updateWithYouStatus:(NSUInteger)arg0 ;


@end


#endif