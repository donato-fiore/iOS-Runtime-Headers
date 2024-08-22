// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDDEVICE_H
#define DNDDEVICE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DNDDevice : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger deviceCapabilities; // ivar: _deviceCapabilities
@property (readonly, nonatomic) NSUInteger deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) ? frameworkVersion; // ivar: _frameworkVersion


+(id)currentDevice;
+(id)deviceWithClass:(NSUInteger)arg0 deviceCapabilities:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClass:(NSUInteger)arg0 deviceCapabilities:(NSUInteger)arg1 frameworkVersion:(struct ? )arg2 ;


@end


#endif