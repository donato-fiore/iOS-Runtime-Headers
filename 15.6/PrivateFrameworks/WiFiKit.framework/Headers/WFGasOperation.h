// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGASOPERATION_H
#define WFGASOPERATION_H

@class NSSet;
@protocol WFWiFiGasProxy;


#import "WFOperation.h"

@interface WFGasOperation : WFOperation

@property NSUInteger elements; // ivar: _elements
@property (retain, nonatomic) NSObject<WFWiFiGasProxy> *gasProxy; // ivar: _gasProxy
@property (retain, nonatomic) NSSet *networks; // ivar: _networks
@property (retain) NSSet *results; // ivar: _results


-(id)initWithGasProxy:(id)arg0 networks:(id)arg1 elements:(NSUInteger)arg2 ;
-(void)_processGasResults:(id)arg0 error:(int)arg1 ;
-(void)start;


@end


#endif