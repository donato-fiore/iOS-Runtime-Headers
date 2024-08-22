// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNGEOROUTEHYPOTHESIZER_H
#define CALNGEOROUTEHYPOTHESIZER_H

@class CADRouteHypothesis, EKTravelEngineHypothesis, NSString, GEORouteHypothesizer;
@protocol CALNRouteHypothesizer;

#import <Foundation/Foundation.h>


@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer>



@property (retain, nonatomic) CADRouteHypothesis *currentCADRouteHypothesis; // ivar: currentCADRouteHypothesis
@property (readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEORouteHypothesizer *routeHypothesizer; // ivar: _routeHypothesizer
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *updateHandler;


-(id)initWithRouteHypothesizer:(id)arg0 ;
-(void)didPostUINotification:(NSUInteger)arg0 ;
-(void)requestRefresh;
-(void)startHypothesizingWithUpdateHandler:(id)arg0 ;
-(void)stopHypothesizing;


@end


#endif