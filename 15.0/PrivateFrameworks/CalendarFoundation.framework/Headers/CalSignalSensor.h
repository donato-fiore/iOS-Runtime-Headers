// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALSIGNALSENSOR_H
#define CALSIGNALSENSOR_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CalSignalSensor : NSObject {
    NSObject<OS_dispatch_source> *_signalSource;
}


@property (copy, nonatomic) id *fireBlock; // ivar: _fireBlock
@property (nonatomic) int signal; // ivar: _signal


-(id)description;
-(id)initWithSignal:(int)arg0 ;
-(void)_shutDownSource;
-(void)dealloc;
-(void)startSensor;
-(void)stopSensor;


@end


#endif