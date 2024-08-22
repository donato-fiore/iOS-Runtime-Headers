// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODEBIOMEEVENTCONTEXTWRAPPER_H
#define ATXMODEBIOMEEVENTCONTEXTWRAPPER_H

@class NSString;
@protocol ATXTimedEventProtocol, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXUnifiedInferredActivityTransition.h"

@interface ATXModeBiomeEventContextWrapper : NSObject <ATXTimedEventProtocol, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger currentActivityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ATXUnifiedInferredActivityTransition *mostRecentModeTransition; // ivar: _mostRecentModeTransition
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<ATXTimedEventProtocol> *wrappedEvent; // ivar: _wrappedEvent


+(BOOL)supportsSecureCoding;
+(id)wrapEventStream:(id)arg0 modeTransitionStream:(id)arg1 startingContext:(id)arg2 ;
+(id)wrapEventStreams:(id)arg0 modeTransitionStream:(id)arg1 startingContext:(id)arg2 ;
-(BOOL)_fileExistsAtPath:(id)arg0 ;
-(id)_dataFromPath:(id)arg0 ;
-(id)eventTime;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPreviousContext:(id)arg0 nextEvent:(id)arg1 ;
-(id)initWithTransitionEvent:(id)arg0 eventToWrap:(id)arg1 ;
-(id)serialize:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)persistToPath:(id)arg0 ;


@end


#endif