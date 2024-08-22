// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNSYNTHETICROUTEHYPOTHESIZERPROVIDER_H
#define CALNSYNTHETICROUTEHYPOTHESIZERPROVIDER_H

@class NSString, CADSyntheticRouteHypothesizerCache;
@protocol CALNRouteHypothesizerProvider;

#import <Foundation/Foundation.h>


@interface CALNSyntheticRouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CADSyntheticRouteHypothesizerCache *syntheticRouteHypothesizerCache; // ivar: _syntheticRouteHypothesizerCache


+(id)sharedInstance;
-(id)hypothesizerForPlannedDestination:(id)arg0 ;
-(id)init;
-(void)createdRouteHypothesizer:(id)arg0 forEventExternalURL:(id)arg1 ;
-(void)didDismissUINotification:(NSUInteger)arg0 forPlannedDestination:(id)arg1 dismissalType:(NSUInteger)arg2 ;
-(void)removedRouteHypothesizerForEventExternalURL:(id)arg0 ;


@end


#endif