// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSOWNINGOBSERVINGOBSERVATION_H
#define _NSOWNINGOBSERVINGOBSERVATION_H

@class NSConcreteObservation;
@protocol NSOwningObserver;


#import "NSObservation.h"
#import "NSString.h"

@interface _NSOwningObservingObservation : NSConcreteObservation <NSOwningObserver>

 {
    NSObservation *_ownedObservation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)setObservation:(id)arg0 ;


@end


#endif