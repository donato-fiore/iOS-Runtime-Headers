// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSDETAILSCONFIGURATION_H
#define PXPHOTOSDETAILSCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXPhotosDetailsConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) Class barsControllerClass; // ivar: _barsControllerClass
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) id *unlockDeviceHandler; // ivar: _unlockDeviceHandler
@property (copy, nonatomic) id *unlockDeviceStatus; // ivar: _unlockDeviceStatus


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif