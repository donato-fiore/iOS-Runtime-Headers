// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINTERACTIONEVENTPROVIDER_H
#define ATXINTERACTIONEVENTPROVIDER_H

@class NSString;
@protocol ATXModeEntityEventProviderProtocol, ATXStableContactRepresentationProviderProtocol;

#import <Foundation/Foundation.h>


@interface ATXInteractionEventProvider : NSObject <ATXModeEntityEventProviderProtocol>

 {
    id<ATXStableContactRepresentationProviderProtocol> *_stableContactRepresentationProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEventFromProvider:(id)arg0 ;
-(BOOL)publisherIsCoreDuetWrapper;
-(id)aggregationEventsFromEvent:(id)arg0 ;
-(id)biomePublisherWithBookmark:(id)arg0 ;
-(id)contactEntityFromEvent:(id)arg0 ;
-(id)contactEntityFromInstantMessagingInteraction:(id)arg0 ;
-(id)dateIntervalFromEvent:(id)arg0 ;
-(id)eventsFromPublisher;
-(id)init;
-(void)updateEntitySpecificFeaturesDict:(id)arg0 aggregationEvent:(id)arg1 isLocalToMode:(BOOL)arg2 ;


@end


#endif