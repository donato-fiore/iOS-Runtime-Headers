// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNSYNTHETICROUTEHYPOTHESIZER_H
#define CALNSYNTHETICROUTEHYPOTHESIZER_H

@class CADRouteHypothesis, EKTravelEngineHypothesis, NSString;
@protocol CALNSyntheticRouteHypothesizerProtocol;

#import <Foundation/Foundation.h>


@interface CALNSyntheticRouteHypothesizer : NSObject <CALNSyntheticRouteHypothesizerProtocol>



@property (retain, nonatomic) CADRouteHypothesis *currentCADRouteHypothesis; // ivar: currentCADRouteHypothesis
@property (readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(void)didPostUINotification:(NSUInteger)arg0 ;
-(void)requestRefresh;
-(void)startHypothesizingWithUpdateHandler:(id)arg0 ;
-(void)stopHypothesizing;


@end


#endif