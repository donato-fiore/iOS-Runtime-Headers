// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXANALYTICSMANAGER_H
#define JFXANALYTICSMANAGER_H

@class NSString;
@protocol JFXAnalytics;

#import <Foundation/Foundation.h>


@interface JFXAnalyticsManager : NSObject <JFXAnalytics>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allIncrementScalarEvents;
+(id)bundleForAnalytics;
+(id)sharedInstance;
-(BOOL)checkIfEventExistsWithName:(id)arg0 ;
-(BOOL)isIncrementScalar:(id)arg0 ;
-(id)dictionaryWithEventName:(id)arg0 value:(CGFloat)arg1 ;
-(id)fullKeyFromEvent:(id)arg0 ;
-(id)init;
-(void)trackEventWithName:(id)arg0 ;
-(void)trackKey:(id)arg0 withCount:(NSUInteger)arg1 ;
-(void)trackKey:(id)arg0 withPayload:(id)arg1 ;


@end


#endif