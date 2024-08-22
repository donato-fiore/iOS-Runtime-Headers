// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMETADATAUTILITIESCAMERADEVICE_H
#define PXMETADATAUTILITIESCAMERADEVICE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface PXMetadataUtilitiesCameraDevice : NSObject

@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSNumber *focalLength; // ivar: _focalLength
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm; // ivar: _focalLengthIn35mm


+(id)cameraForFocalLength:(id)arg0 deviceName:(id)arg1 ;
+(id)supportedDevices;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithDisplayName:(id)arg0 focalLength:(id)arg1 focalLengthIn35mm:(id)arg2 ;


@end


#endif