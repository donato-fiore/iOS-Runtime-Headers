// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CURANGINGSAMPLE_H
#define CURANGINGSAMPLE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface CURangingSample : NSObject

@property (nonatomic) int channel; // ivar: _channel
@property (copy, nonatomic) NSData *deviceAddress; // ivar: _deviceAddress
@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) int rawRSSI; // ivar: _rawRSSI


-(id)description;


@end


#endif