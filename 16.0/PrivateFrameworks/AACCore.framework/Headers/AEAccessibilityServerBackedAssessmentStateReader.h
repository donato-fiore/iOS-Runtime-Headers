// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEACCESSIBILITYSERVERBACKEDASSESSMENTSTATEREADER_H
#define AEACCESSIBILITYSERVERBACKEDASSESSMENTSTATEREADER_H

@protocol AEAssessmentStateReading, AEAccessibilityServerPrimitives, OS_dispatch_queue, AEObservation;

#import <Foundation/Foundation.h>


@interface AEAccessibilityServerBackedAssessmentStateReader : NSObject <AEAssessmentStateReading>

 {
    id<AEAccessibilityServerPrimitives> *_accessibilityServerPrimitives;
    NSObject<OS_dispatch_queue> *_queue;
    id<AEObservation> *_guidedAccessActiveStateChangeObservation;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active


-(id)initWithAccessibilityServerPrimitives:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;


@end


#endif