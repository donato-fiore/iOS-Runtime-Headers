// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSIGNIFICANTTIMEEVENTBUILDER_H
#define HFSIGNIFICANTTIMEEVENTBUILDER_H

@class NSString, NSDateComponents;
@protocol HFTimeEventBuilder;


#import "HFEventBuilder.h"

@interface HFSignificantTimeEventBuilder : HFEventBuilder <HFTimeEventBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *significantEvent; // ivar: _significantEvent
@property (copy, nonatomic) NSDateComponents *significantEventOffset; // ivar: _significantEventOffset
@property (readonly) Class superclass;


-(id)buildNewEventsFromCurrentState;
-(id)compareToObject:(id)arg0 ;
-(id)comparisonKey;
-(id)eventType;
-(id)initWithEvent:(id)arg0 ;
-(id)naturalLanguageNameOfType:(NSUInteger)arg0 withHome:(id)arg1 recurrences:(id)arg2 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 recurrences:(id)arg1 ;
-(id)performValidation;


@end


#endif