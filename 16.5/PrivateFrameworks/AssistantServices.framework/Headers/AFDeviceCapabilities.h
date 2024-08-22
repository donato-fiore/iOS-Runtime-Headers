// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFDEVICECAPABILITIES_H
#define AFDEVICECAPABILITIES_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding>

 {
    NSDictionary *_serializedBackingStore;
}


@property (readonly, nonatomic) NSInteger voiceTriggerEnabled; // ivar: _voiceTriggerEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedBackingStore:(id)arg0 ;
-(id)initWithVoiceTriggerEnabled:(NSInteger)arg0 ;
-(id)serializedBackingStore;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif