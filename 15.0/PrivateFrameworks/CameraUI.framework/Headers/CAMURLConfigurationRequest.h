// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMURLCONFIGURATIONREQUEST_H
#define CAMURLCONFIGURATIONREQUEST_H


#import <Foundation/Foundation.h>


@interface CAMURLConfigurationRequest : NSObject

@property (readonly, nonatomic) NSInteger requestedCaptureDevice; // ivar: _requestedCaptureDevice
@property (readonly, nonatomic) NSInteger requestedCaptureMode; // ivar: _requestedCaptureMode
@property (readonly, nonatomic) BOOL wantsQRCodeForSession; // ivar: _wantsQRCodeForSession


-(BOOL)_captureModeFromString:(id)arg0 outCaptureMode:(*NSInteger)arg1 ;
-(BOOL)_initializeFromQueryDictionary:(id)arg0 ;
-(NSInteger)_captureDeviceFromString:(id)arg0 outCaptureDevice:(*NSInteger)arg1 ;
-(id)initWithQueryDictionary:(id)arg0 ;


@end


#endif