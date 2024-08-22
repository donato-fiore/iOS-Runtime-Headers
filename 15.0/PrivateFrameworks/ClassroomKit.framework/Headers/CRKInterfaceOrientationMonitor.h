// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKINTERFACEORIENTATIONMONITOR_H
#define CRKINTERFACEORIENTATIONMONITOR_H

@class FBSOrientationObserver, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CRKInterfaceOrientationMonitor : NSObject {
    FBSOrientationObserver *mObserver;
    NSMutableArray *mCompletionBlocks;
    BOOL mIsWaitingForFirstUpdate;
}


@property (nonatomic) NSUInteger interfaceOrientation; // ivar: _interfaceOrientation


-(NSUInteger)DMFInterfaceOrientationFromBSInterfaceOrientation:(NSInteger)arg0 ;
-(id)init;
-(id)makeUpdateHandler:(SEL)arg0 ;
-(void)dealloc;
-(void)interfaceOrientationWithCompletion:(id)arg0 ;
-(void)updateInterfaceOrientationWithBSOrientation:(NSInteger)arg0 ;
-(void)updateInterfaceOrientationWithDMFOrientation:(NSUInteger)arg0 ;
-(void)updateInterfaceOrientationWithNotification:(id)arg0 ;


@end


#endif