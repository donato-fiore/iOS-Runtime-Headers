// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUCONTENTANALYTICSEVENT_H
#define NUCONTENTANALYTICSEVENT_H

@class NSString, SXAnalyticsEvent;
@protocol NUAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface NUContentAnalyticsEvent : NSObject <NUAnalyticsEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXAnalyticsEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEvent:(id)arg0 ;


@end


#endif