// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRUIFCARDLOADINGMONITOR_H
#define SRUIFCARDLOADINGMONITOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SRUIFCardLoadingMonitor : NSObject {
    NSMutableArray *_observers;
}




+(id)sharedInstance;
-(BOOL)isTrackingObserver:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)broadcastCardSnippet:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif