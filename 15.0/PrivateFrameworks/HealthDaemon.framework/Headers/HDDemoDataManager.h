// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDEMODATAMANAGER_H
#define HDDEMODATAMANAGER_H

@protocol HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDemoDataGenerator.h"
#import "HDProfile.h"

@interface HDDemoDataManager : NSObject <HDProfileReadyObserver>

 {
    NSObject<OS_dispatch_queue> *_demoDataQueue;
}


@property (readonly, nonatomic) HDDemoDataGenerator *generator; // ivar: _generator
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile


-(id)initWithProfile:(id)arg0 ;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif