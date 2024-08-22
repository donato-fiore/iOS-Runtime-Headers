// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRDEVICEOSVERSION_H
#define SPRDEVICEOSVERSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SPRDeviceOSVersion : NSObject

@property (readonly, copy, nonatomic) NSString *buildNumber; // ivar: _buildNumber
@property (readonly, copy, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (readonly, copy, nonatomic) NSString *shortVersion;


-(id)description;
-(id)initWithDERRepresentation:(id)arg0 ;


@end


#endif