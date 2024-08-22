// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STAGEPRESETSVIEWEDCOREANALYTICSEVENT_H
#define STAGEPRESETSVIEWEDCOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STAgePresetsViewedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly, copy) NSString *description;
@property (readonly) BOOL initialSetup; // ivar: _initialSetup
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSString *sessionId; // ivar: _sessionId


-(id)initWithSessionId:(id)arg0 isInitialSetup:(BOOL)arg1 ;


@end


#endif