// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLBEACONINTERNAL_H
#define CLBEACONINTERNAL_H

@class NSUUID, NSNumber;

#import <Foundation/Foundation.h>


@interface CLBeaconInternal : NSObject {
    NSUUID *proximityUUID;
    NSNumber *major;
    NSNumber *minor;
    NSInteger proximity;
    CGFloat accuracy;
    NSInteger rssi;
    CGFloat timestamp;
}






@end


#endif