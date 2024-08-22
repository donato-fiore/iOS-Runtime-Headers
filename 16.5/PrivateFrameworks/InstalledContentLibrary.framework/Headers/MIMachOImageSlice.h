// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIMACHOIMAGESLICE_H
#define MIMACHOIMAGESLICE_H


#import <Foundation/Foundation.h>


@interface MIMachOImageSlice : NSObject

@property (nonatomic) unsigned int minOSVersion; // ivar: _minOSVersion
@property (nonatomic) unsigned int platform; // ivar: _platform
@property (nonatomic) unsigned int sdkVersion; // ivar: _sdkVersion


-(id)initWithPlatform:(unsigned int)arg0 sdkVersion:(unsigned int)arg1 minOSVersion:(unsigned int)arg2 ;


@end


#endif