// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRREADERRECORDINGREQUEST_H
#define SRREADERRECORDINGREQUEST_H

@class NSString, NSError, NSDictionary;
@protocol SRRequestRecording;

#import <Foundation/Foundation.h>


@interface SRReaderRecordingRequest : NSObject <SRRequestRecording>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, retain, nonatomic) NSError *configurationDecodeError; // ivar: _configurationDecodeError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *sensor; // ivar: _sensor
@property (retain, nonatomic) NSDictionary *sensorConfiguration; // ivar: _sensorConfiguration
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif