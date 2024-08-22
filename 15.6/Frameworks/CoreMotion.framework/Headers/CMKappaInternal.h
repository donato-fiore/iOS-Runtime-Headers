// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMKAPPAINTERNAL_H
#define CMKAPPAINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMKappaInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
    id *fHandler;
}




-(id)init;
-(void)_startKappaUpdatesForItem:(NSInteger)arg0 withHandler:(id)arg1 ;
-(void)_stopKappaUpdates;
-(void)_teardown;
-(void)dealloc;


@end


#endif