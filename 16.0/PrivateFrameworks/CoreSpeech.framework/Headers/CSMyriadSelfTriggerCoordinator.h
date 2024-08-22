// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSMYRIADSELFTRIGGERCOORDINATOR_H
#define CSMYRIADSELFTRIGGERCOORDINATOR_H

@class NSString;
@protocol CSSelfTriggerDetectorDelegate, CSMyriadSelfTriggerCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface CSMyriadSelfTriggerCoordinator : NSObject <CSSelfTriggerDetectorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSMyriadSelfTriggerCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)selfTriggerDetector:(id)arg0 didDetectSelfTrigger:(id)arg1 ;


@end


#endif