// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTTAPLOCAL_H
#define DTTAPLOCAL_H

@protocol OS_dispatch_source, DTTapLocalDelegate;


#import "DTTap.h"

@interface DTTapLocal : DTTap {
    NSObject<OS_dispatch_source> *_pollTimer;
    BOOL _validConfig;
}


@property (readonly, retain) NSObject<DTTapLocalDelegate> *delegate; // ivar: _delegate


-(BOOL)_canFetchWhileArchiving;
-(id)_fetchDataForReason:(NSUInteger)arg0 ;
-(id)initWithConfig:(id)arg0 memoHandler:(id)arg1 delegate:(id)arg2 ;
-(void)_handleStatusMemo:(id)arg0 ;
-(void)_pause;
-(void)_start;
-(void)_stop;
-(void)_unpause;


@end


#endif