// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXTIMEBASEDINFERREDACTIVITYBIOMESTREAM_H
#define ATXTIMEBASEDINFERREDACTIVITYBIOMESTREAM_H

@class NSString;
@protocol ATXUnifiedInferredActivityBiomeStreamProtocol;

#import <Foundation/Foundation.h>


@interface ATXTimeBasedInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)sessionPublisherFromStartTime:(CGFloat)arg0 ;
-(id)transitionPublisherFromStartTime:(CGFloat)arg0 ;
-(void)_addBedtimeTransitionsForDate:(id)arg0 calendar:(id)arg1 toArray:(id)arg2 ;
-(void)_addHomeTransitionsForDate:(id)arg0 calendar:(id)arg1 toArray:(id)arg2 ;
-(void)_addTransitionForDate:(id)arg0 transitionHour:(NSInteger)arg1 transitionMinute:(NSInteger)arg2 calendar:(id)arg3 isEntry:(BOOL)arg4 activity:(NSUInteger)arg5 toArray:(id)arg6 ;
-(void)_addWorkTransitionsForDate:(id)arg0 calendar:(id)arg1 toArray:(id)arg2 ;


@end


#endif