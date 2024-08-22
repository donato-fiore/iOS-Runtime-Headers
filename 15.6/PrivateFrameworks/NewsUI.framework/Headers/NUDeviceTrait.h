// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUDEVICETRAIT_H
#define NUDEVICETRAIT_H

@class NSString;
@protocol NUDeviceTrait;

#import <Foundation/Foundation.h>


@interface NUDeviceTrait : NSObject <NUDeviceTrait>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger deviceTraitSize; // ivar: _deviceTraitSize
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLandscape) BOOL landscape;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDeviceTraitSize:(NSUInteger)arg0 ;


@end


#endif