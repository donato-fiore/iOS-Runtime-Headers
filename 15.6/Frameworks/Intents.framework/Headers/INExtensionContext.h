// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INEXTENSIONCONTEXT_H
#define INEXTENSIONCONTEXT_H

@class NSArray, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INExtensionContext : NSObject <NSSecureCoding>



@property (copy, nonatomic, setter=_setAirPlayRouteIdentifiers:) NSArray *_airPlayRouteIdentifiers; // ivar: _airPlayRouteIdentifiers
@property (nonatomic, setter=_setAudioSessionID:) unsigned int _audioSessionID; // ivar: _audioSessionID
@property (copy, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *_recordDeviceIdentifier; // ivar: _recordDeviceIdentifier
@property (copy, nonatomic, setter=_setRecordDeviceUID:) NSUUID *_recordDeviceUID; // ivar: _recordDeviceUID
@property (copy, nonatomic, setter=_setRecordRoute:) NSString *_recordRoute; // ivar: _recordRoute


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif