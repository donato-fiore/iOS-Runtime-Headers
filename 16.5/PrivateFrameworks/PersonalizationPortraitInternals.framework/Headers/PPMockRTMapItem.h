// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPMOCKRTMAPITEM_H
#define PPMOCKRTMAPITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PPMockRTAddress.h"
#import "PPMockRTLocation.h"

@interface PPMockRTMapItem : NSObject

@property (retain, nonatomic) PPMockRTAddress *address; // ivar: _address
@property (retain, nonatomic) PPMockRTLocation *location; // ivar: _location
@property (retain, nonatomic) NSString *name; // ivar: _name




@end


#endif