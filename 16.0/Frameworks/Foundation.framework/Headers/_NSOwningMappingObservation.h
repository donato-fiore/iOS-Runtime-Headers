// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSOWNINGMAPPINGOBSERVATION_H
#define _NSOWNINGMAPPINGOBSERVATION_H

@class NSConcreteObservation;
@protocol NSOwningObserver, NSObservable;


#import "NSObservation.h"
#import "NSString.h"

@interface _NSOwningMappingObservation : NSConcreteObservation <NSOwningObserver, NSObservable>

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