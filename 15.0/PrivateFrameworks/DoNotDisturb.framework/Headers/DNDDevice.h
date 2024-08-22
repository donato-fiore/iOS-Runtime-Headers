// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDDEVICE_H
#define DNDDEVICE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DNDDevice : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger deviceCapabilities; // ivar: _deviceCapabilities
@property (readonly, nonatomic) NSUInteger deviceClass; // ivar: _deviceClass


+(id)currentDevice;
+(id)deviceWithClass:(NSUInteger)arg0 deviceCapabilities:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithClass:(NSUInteger)arg0 deviceCapabilities:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif