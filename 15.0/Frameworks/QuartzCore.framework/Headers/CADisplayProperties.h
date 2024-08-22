// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADISPLAYPROPERTIES_H
#define CADISPLAYPROPERTIES_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CADisplayMode.h"

@interface CADisplayProperties : NSObject {
    CADisplayMode *_currentMode;
    NSString *_overscanAdjustment;
    unsigned int _connectionSeed;
}


@property (nonatomic) unsigned int connectionSeed;
@property (retain, nonatomic) CADisplayMode *currentMode;
@property (copy, nonatomic) NSString *overscanAdjustment;


-(void)dealloc;


@end


#endif