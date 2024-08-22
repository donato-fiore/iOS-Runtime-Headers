// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCDEVICEINFO_H
#define RCDEVICEINFO_H

@class NSString, NSArray;
@protocol RCSerializable;

#import <Foundation/Foundation.h>


@interface RCDeviceInfo : NSObject <RCSerializable>



@property (readonly, copy, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (readonly, nonatomic) NSInteger dstOffset; // ivar: _dstOffset
@property (readonly, copy, nonatomic) NSString *formatVersion; // ivar: _formatVersion
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (readonly, copy, nonatomic) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger utcOffset; // ivar: _utcOffset


+(id)defaultDeviceInfo;
+(id)defaultDeviceInfoWithAppVersion:(id)arg0 ;
+(id)defaultDeviceInfoWithAppVersion:(id)arg0 formatVersion:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithPreferredLanguages:(id)arg0 deviceType:(id)arg1 utcOffset:(NSInteger)arg2 dstOffset:(NSInteger)arg3 appVersion:(id)arg4 osVersion:(id)arg5 ;
-(id)initWithPreferredLanguages:(id)arg0 deviceType:(id)arg1 utcOffset:(NSInteger)arg2 dstOffset:(NSInteger)arg3 appVersion:(id)arg4 osVersion:(id)arg5 countryCode:(id)arg6 ;
-(id)initWithPreferredLanguages:(id)arg0 deviceType:(id)arg1 utcOffset:(NSInteger)arg2 dstOffset:(NSInteger)arg3 appVersion:(id)arg4 osVersion:(id)arg5 countryCode:(id)arg6 formatVersion:(id)arg7 ;


@end


#endif