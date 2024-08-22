// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMNATALIMETERINTERNAL_H
#define CMNATALIMETERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMNatalimeterInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
    id *fHandler;
}




-(NSUInteger)_promptsNeeded;
-(id)init;
-(void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> )arg0 withHandler:(id)arg1 ;
-(void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg0 withHandler:(id)arg1 ;
-(void)_queryAbsoluteNatalimetryDataSinceRecord:(NSInteger)arg0 withHandler:(id)arg1 ;
-(void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(id)arg0 ;
-(void)_stopAbsoluteNatalimetryDataUpdates;
-(void)_teardown;
-(void)dealloc;


@end


#endif