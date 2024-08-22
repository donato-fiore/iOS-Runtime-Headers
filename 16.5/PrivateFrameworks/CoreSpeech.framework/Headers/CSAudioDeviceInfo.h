// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIODEVICEINFO_H
#define CSAUDIODEVICEINFO_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CSAudioRecordDeviceInfo.h"

@interface CSAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *playbackDeviceTypeList; // ivar: _playbackDeviceTypeList
@property (readonly, copy, nonatomic) NSString *playbackRoute; // ivar: _playbackRoute
@property (readonly, copy, nonatomic) CSAudioRecordDeviceInfo *recordDeviceInfo; // ivar: _recordDeviceInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordDeviceInfo:(id)arg0 playbackRoute:(id)arg1 playbackDeviceTypeList:(id)arg2 ;
-(id)initWithXPCObject:(id)arg0 ;
-(id)xpcObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif