// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFINSTRUMENTATIONOBSERVERCONNECTION_H
#define AFINSTRUMENTATIONOBSERVERCONNECTION_H

@class NSSet, NSString;
@protocol AFInvalidating;

#import <Foundation/Foundation.h>

#import "AFAnalyticsObserverConnection.h"

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating>

 {
    AFAnalyticsObserverConnection *_observerConnection;
    NSSet *_filteredTagIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithObservation:(id)arg0 ;
// -(id)initWithObservation:(id)arg0 filterByInstrumentationTypes:(unk)arg1  ;
-(void)flushWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)waitUntilInvalidated;


@end


#endif