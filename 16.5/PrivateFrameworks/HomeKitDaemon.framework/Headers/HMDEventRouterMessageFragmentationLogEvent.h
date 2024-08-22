// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDEVENTROUTERMESSAGEFRAGMENTATIONLOGEVENT_H
#define HMDEVENTROUTERMESSAGEFRAGMENTATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDEventRouterMessageFragmentationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCachedEventQueue; // ivar: _isCachedEventQueue
@property (readonly, nonatomic) BOOL isFragmented; // ivar: _isFragmented
@property (readonly) Class superclass;


-(id)initWithIsCachedEventQueue:(BOOL)arg0 isFragmented:(BOOL)arg1 ;


@end


#endif