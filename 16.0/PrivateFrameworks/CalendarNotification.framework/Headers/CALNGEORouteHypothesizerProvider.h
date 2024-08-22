// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNGEOROUTEHYPOTHESIZERPROVIDER_H
#define CALNGEOROUTEHYPOTHESIZERPROVIDER_H

@class NSString;
@protocol CALNRouteHypothesizerProvider;

#import <Foundation/Foundation.h>


@interface CALNGEORouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)hypothesizerForPlannedDestination:(id)arg0 ;
-(void)createdRouteHypothesizer:(id)arg0 forEventExternalURL:(id)arg1 ;
-(void)didDismissUINotification:(NSUInteger)arg0 forPlannedDestination:(id)arg1 dismissalType:(NSUInteger)arg2 ;
-(void)removedRouteHypothesizerForEventExternalURL:(id)arg0 ;


@end


#endif