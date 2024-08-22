// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCHLSSEGMENT_H
#define FCHLSSEGMENT_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "FCHLSMap.h"
#import "FCHLSKey.h"

@interface FCHLSSegment : NSObject {
    FCHLSMap *_map;
    NSURL *_url;
    CGFloat _duration;
    FCHLSKey *_key;
}




-(id)description;


@end


#endif