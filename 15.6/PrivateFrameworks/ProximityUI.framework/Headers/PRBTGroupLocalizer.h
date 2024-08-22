// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRBTGROUPLOCALIZER_H
#define PRBTGROUPLOCALIZER_H

@class NSString, NSMutableArray, NSMutableDictionary;
@protocol PRBTLocalizerDelegate, OS_os_log, PRBTGroupLocalizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PRBTGroupLocalizer : NSObject <PRBTLocalizerDelegate>

 {
    NSObject<OS_os_log> *_logger;
    BOOL _isUT;
    BOOL _shouldLogAnalytics;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRBTGroupLocalizerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *localizerArray; // ivar: _localizerArray
@property (retain, nonatomic) NSMutableArray *localizerShouldRangeArray; // ivar: _localizerShouldRangeArray
@property (retain, nonatomic) NSMutableArray *localizerStateArray; // ivar: _localizerStateArray
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *proximityQueue; // ivar: _proximityQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *uuidIndexMap; // ivar: _uuidIndexMap


-(BOOL)startRangingOn:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stopRangingOn:(id)arg0 withError:(*id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 id:(id)arg2 isUT:(BOOL)arg3 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 id:(id)arg2 isUT:(BOOL)arg3 withAnalytics:(BOOL)arg4 ;
-(void)btLocalizerChangedState:(NSUInteger)arg0 onItem:(id)arg1 ;
-(void)dealloc;
-(void)didFailWithError:(id)arg0 onItem:(id)arg1 ;
-(void)didUpdateBTProximity:(id)arg0 ;
-(void)informDelegateRangingStarted:(id)arg0 withError:(id)arg1 ;
-(void)informDelegateRangingStopped:(id)arg0 withError:(id)arg1 ;
-(void)updateDelegateWithSelector:(SEL)arg0 object:(id)arg1 ;
-(void)willIntegrateBTRSSI:(id)arg0 ;


@end


#endif