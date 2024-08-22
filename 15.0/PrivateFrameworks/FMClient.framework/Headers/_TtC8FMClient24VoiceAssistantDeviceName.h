// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT24VOICEASSISTANTDEVICENAME_H
#define _TTC8FMCLIENT24VOICEASSISTANTDEVICENAME_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient24VoiceAssistantDeviceName : NSObject <NSSecureCoding>

 {
    ? deviceName;
    ? ownerFirstName;
    ? ownerLastName;
    ? $__lazy_storage_$_syncAnchor;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *ownerFirstName;
@property (nonatomic, readonly) NSString *ownerLastName;
@property (nonatomic, copy) NSString *syncAnchor;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceName:(id)arg0 ownerFirstName:(id)arg1 ownerLastName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif