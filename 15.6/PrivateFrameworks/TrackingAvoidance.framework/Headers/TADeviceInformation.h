// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TADEVICEINFORMATION_H
#define TADEVICEINFORMATION_H

@class NSDate, NSString;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>

#import "TASPAdvertisement.h"

@interface TADeviceInformation : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, nonatomic) TASPAdvertisement *advertisement; // ivar: _advertisement
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger notificationState; // ivar: _notificationState
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)deviceTypeToString:(NSUInteger)arg0 ;
+(id)notificationStateToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTASPAdvertisement:(id)arg0 deviceType:(NSUInteger)arg1 notificationState:(NSUInteger)arg2 date:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif