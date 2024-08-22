// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDLISTUNSUBSCRIBEHANDLER_H
#define EDLISTUNSUBSCRIBEHANDLER_H

@class EMListUnsubscribeDetector;
@protocol EFScheduler;

#import <Foundation/Foundation.h>


@interface EDListUnsubscribeHandler : NSObject {
    EMListUnsubscribeDetector *_detector;
    os_unfair_lock_s _detectorLock;
}


@property (readonly, nonatomic) EMListUnsubscribeDetector *detector;
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler


+(id)log;
-(id)init;
-(void)ignoreWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)unsubscribeHTMLWithCommand:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;
-(void)unsubscribeMailtoWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)unsubscribeWithCommand:(id)arg0 completion:(id)arg1 ;


@end


#endif