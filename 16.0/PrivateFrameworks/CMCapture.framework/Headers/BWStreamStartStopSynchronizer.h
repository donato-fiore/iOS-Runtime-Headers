// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTREAMSTARTSTOPSYNCHRONIZER_H
#define BWSTREAMSTARTSTOPSYNCHRONIZER_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface BWStreamStartStopSynchronizer : NSObject {
    NSDictionary *_streamStatesByPortType;
    float _timeoutInSeconds;
    BOOL _masterStartedGroupEntered;
    NSArray *_synchronizationSlavesOrderedByPriority;
}


@property (retain, nonatomic) NSArray *synchronizationSlavesOrderedByPriority;
@property (nonatomic) BOOL waitForMasterAEToSettle;


+(void)initialize;
-(BOOL)streamWillStart:(id)arg0 ;
-(BOOL)streamWillStop:(id)arg0 ;
-(id)initWithStreams:(id)arg0 timeoutInSeconds:(float)arg1 ;
-(void)dealloc;
-(void)streamDidStart:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;


@end


#endif