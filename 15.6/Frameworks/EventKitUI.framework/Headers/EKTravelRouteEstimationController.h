// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKTRAVELROUTEESTIMATIONCONTROLLER_H
#define EKTRAVELROUTEESTIMATIONCONTROLLER_H

@class EKEventStore, EKStructuredLocation, NSMutableArray, NSDate, NSDictionary;
@protocol EKStyleProvider, EKTravelRouteEstimationControllerDelegate;

#import <Foundation/Foundation.h>


@interface EKTravelRouteEstimationController : NSObject {
    EKEventStore *_eventStore;
    id<EKStyleProvider> *_styleProvider;
    EKStructuredLocation *_originStructuredLocation;
    NSMutableArray *_rows;
}


@property (retain) NSDate *arrivalDate; // ivar: _arrivalDate
@property (weak, nonatomic) NSObject<EKTravelRouteEstimationControllerDelegate> *delegate; // ivar: _delegate
@property (retain) EKStructuredLocation *destinationStructuredLocation; // ivar: _destinationStructuredLocation
@property (retain) EKStructuredLocation *evaluatedOriginLocation; // ivar: _evaluatedOriginLocation
@property BOOL isEstimating; // ivar: _isEstimating
@property (readonly, nonatomic) NSUInteger numberOfOutputRows;
@property (retain, nonatomic) EKStructuredLocation *originStructuredLocation;
@property (retain) NSDictionary *travelTimeEstimatedValues; // ivar: _travelTimeEstimatedValues
@property (retain) NSDictionary *travelTimeLookupErrors; // ivar: _travelTimeLookupErrors


+(id)_basedOnLocationLocalizedString;
-(BOOL)_estimatedTravelTimeRowHasErrorAtRowIndex:(NSUInteger)arg0 ;
-(BOOL)estimatedTravelTimeRowHasErrorAtRowIndex:(NSUInteger)arg0 ;
-(CGFloat)_estimatedTravelTimeValueAtRowIndex:(NSUInteger)arg0 ;
-(CGFloat)estimatedTravelTimeValueAtRowIndex:(NSUInteger)arg0 ;
-(NSInteger)_estimatedTravelTimeRoutingModeAtRowIndex:(NSUInteger)arg0 ;
-(NSInteger)estimatedTravelTimeRoutingModeAtRowIndex:(NSUInteger)arg0 ;
-(id)_estimatedTravelTimeRowErrorAtRowIndex:(NSUInteger)arg0 ;
-(id)_imageForCellAtIndex:(NSUInteger)arg0 ;
-(id)_routingModeTypesAsEnum;
-(id)estimatedTravelTimeRowErrorAtRowIndex:(NSUInteger)arg0 ;
-(id)estimatedTravelTimeTableViewCellWithRowIndex:(NSUInteger)arg0 ;
-(id)initWithDestinationStructuredLocation:(id)arg0 styleProvider:(id)arg1 eventStore:(id)arg2 ;
-(void)_beginOriginLocationEstimationCoreRoutineLookup;
-(void)_beginOriginLocationEstimationEventKitLookup;
-(void)_lookupTimedOut;
-(void)_originLocationEstimationCompletedCoreRoutineLookup;
-(void)_originLocationEstimationCompletedEventKitLookup;
-(void)beginOriginLocationEstimationLookup;
-(void)beginTravelTimeEstimationLookup;
-(void)dealloc;


@end


#endif