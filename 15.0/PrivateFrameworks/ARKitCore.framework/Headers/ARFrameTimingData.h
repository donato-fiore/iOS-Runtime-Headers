// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARFRAMETIMINGDATA_H
#define ARFRAMETIMINGDATA_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface ARFrameTimingData : NSObject {
    NSMutableDictionary *_timestampsByDataClassKey;
}


@property (readonly, nonatomic) NSDictionary *timestamps;
@property (nonatomic) CGFloat videoLatency; // ivar: _videoLatency


-(id)init;
-(void)addTimestamp:(CGFloat)arg0 forDataOfClass:(Class)arg1 ;


@end


#endif