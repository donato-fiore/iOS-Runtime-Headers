// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT15PLAYSOUNDDEVICE_H
#define _TTC8FMCLIENT15PLAYSOUNDDEVICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient15PlaySoundDevice : NSObject <NSSecureCoding>

 {
    ? serverId;
    ? locality;
}


@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *locality;
@property (nonatomic, readonly) BOOL safetyWarningConfirmed; // ivar: safetyWarningConfirmed
@property (nonatomic, readonly) NSString *serverId;


+(BOOL)supportsSecureCoding;
+(id)PlaySoundDeviceLocalityLocal;
+(id)PlaySoundDeviceLocalityRemote;
+(id)PlaySoundDeviceLocalityUnknown;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerId:(id)arg0 locality:(id)arg1 safetyWarningConfirmed:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif