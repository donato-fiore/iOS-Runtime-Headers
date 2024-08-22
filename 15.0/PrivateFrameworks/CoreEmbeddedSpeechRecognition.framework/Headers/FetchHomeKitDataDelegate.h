// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FETCHHOMEKITDATADELEGATE_H
#define FETCHHOMEKITDATADELEGATE_H

@class NSString;
@protocol HMHomeManagerDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "_CESRHomeKitNames.h"

@interface FetchHomeKitDataDelegate : NSObject <HMHomeManagerDelegate>

 {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) _CESRHomeKitNames *homeKitNames; // ivar: _homeKitNames
@property (readonly) Class superclass;


-(id)initWithSemaphore:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;


@end


#endif