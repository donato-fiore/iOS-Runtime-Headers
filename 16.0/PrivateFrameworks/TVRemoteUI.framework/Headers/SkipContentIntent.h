// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKIPCONTENTINTENT_H
#define SKIPCONTENTINTENT_H

@class INIntent, NSNumber;


#import "TVRDevice.h"

@interface SkipContentIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (nonatomic) NSInteger skipCommand;
@property (copy, nonatomic) NSNumber *skipDuration;




@end


#endif