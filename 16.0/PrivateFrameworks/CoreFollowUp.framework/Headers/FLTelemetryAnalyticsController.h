// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLTELEMETRYANALYTICSCONTROLLER_H
#define FLTELEMETRYANALYTICSCONTROLLER_H

@class NSString;
@protocol FLTelemetryController;

#import <Foundation/Foundation.h>


@interface FLTelemetryAnalyticsController : NSObject <FLTelemetryController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_captureItem:(id)arg0 event:(id)arg1 source:(id)arg2 ;
-(void)captureActionForItem:(id)arg0 withEvent:(NSUInteger)arg1 source:(NSUInteger)arg2 ;
-(void)captureCurrentState:(id)arg0 ;
-(void)captureItemAddition:(id)arg0 ;
-(void)captureItemRemoval:(id)arg0 ;
-(void)captureItemView:(id)arg0 ;


@end


#endif