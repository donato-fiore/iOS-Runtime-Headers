// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCOVERLAYSETTINGS_H
#define ASCOVERLAYSETTINGS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface ASCOverlaySettings : NSObject

@property (copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property (copy, nonatomic) NSNumber *rateLimitRequestsPerSecond;
@property (copy, nonatomic) NSNumber *rateLimitTimeWindow;


+(id)sharedSettings;
-(id)_init;


@end


#endif