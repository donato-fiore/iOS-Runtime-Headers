// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFLOCATIONREGIONEVENTBUILDER_H
#define HFLOCATIONREGIONEVENTBUILDER_H

@class NSString, CLCircularRegion;
@protocol HFLocationEventBuilder;


#import "HFEventBuilder.h"

@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger locationEventType;
@property (copy, nonatomic) CLCircularRegion *region; // ivar: _region
@property (readonly) Class superclass;


-(BOOL)isRegionAtHome:(id)arg0 ;
-(id)buildNewEventsFromCurrentState;
-(id)compareToObject:(id)arg0 ;
-(id)comparisonKey;
-(id)eventType;
-(id)initWithEvent:(id)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;


@end


#endif