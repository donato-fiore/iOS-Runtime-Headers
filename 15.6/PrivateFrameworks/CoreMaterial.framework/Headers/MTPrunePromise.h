// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTPRUNEPROMISE_H
#define MTPRUNEPROMISE_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "MTMaterialLayer.h"

@interface MTPrunePromise : NSObject {
    MTMaterialLayer *_materialLayer;
    NSDate *_timeStamp;
}


@property (nonatomic, getter=isPromiseFulfilled) BOOL promiseFulfilled; // ivar: _promiseFulfilled


-(CGFloat)timeIntervalSincePromise;
-(id)initWithMaterialLayer:(id)arg0 ;
-(void)dealloc;
-(void)fulfillPromise;


@end


#endif