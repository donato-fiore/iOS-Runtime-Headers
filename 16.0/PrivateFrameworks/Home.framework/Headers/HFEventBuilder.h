// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFEVENTBUILDER_H
#define HFEVENTBUILDER_H

@class NSString;
@protocol HFComparable, NAHashable;

#import <Foundation/Foundation.h>


@interface HFEventBuilder : NSObject <HFComparable, NAHashable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)eventBuilderForEvent:(id)arg0 ;
-(id)buildNewEventsFromCurrentState;
-(id)compareToObject:(id)arg0 ;
-(id)comparisonKey;
-(id)init;
-(id)initWithEvent:(id)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;


@end


#endif