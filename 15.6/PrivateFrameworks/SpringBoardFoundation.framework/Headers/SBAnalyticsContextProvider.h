// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBANALYTICSCONTEXTPROVIDER_H
#define SBANALYTICSCONTEXTPROVIDER_H

@class SBSAnalyticsState, NSString;
@protocol SBFAnalyticsBackendEventContextProviding;

#import <Foundation/Foundation.h>

#import "SBFAnalyticsBackend.h"

@interface SBAnalyticsContextProvider : NSObject <SBFAnalyticsBackendEventContextProviding>

 {
    SBSAnalyticsState *_eventPayload;
    SBFAnalyticsBackend *_backend;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBSAnalyticsState *eventPayload;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEventPayload:(id)arg0 backend:(id)arg1 ;
-(void)stateForQueryName:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif