// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFAKEMODEEVENTPROVIDER_H
#define ATXFAKEMODEEVENTPROVIDER_H

@class NSArray, NSString;
@protocol ATXModeEntityEventProviderProtocol;

#import <Foundation/Foundation.h>


@interface ATXFakeModeEventProvider : NSObject <ATXModeEntityEventProviderProtocol>

 {
    NSArray *_modeEvents;
    BOOL _wasInitializedWithoutEntity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEventFromProvider:(id)arg0 ;
-(BOOL)publisherIsCoreDuetWrapper;
-(id)aggregationEventsFromEvent:(id)arg0 ;
-(id)biomePublisherWithBookmark:(id)arg0 ;
-(id)dateIntervalFromEvent:(id)arg0 ;
-(id)eventsFromPublisher;
-(id)initWithEventDateIntervals:(id)arg0 ;
-(id)initWithModeEvents:(id)arg0 expectsNilEntity:(BOOL)arg1 ;
-(void)updateEntitySpecificFeaturesDict:(id)arg0 aggregationEvent:(id)arg1 isLocalToMode:(BOOL)arg2 ;


@end


#endif