// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDEBUGMETRICSEVENT_H
#define VUIDEBUGMETRICSEVENT_H

@class NSArray, NSDate, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface VUIDebugMetricsEvent : NSObject

@property (retain, nonatomic) NSArray *eventData; // ivar: _eventData
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) NSString *pageContext;
@property (retain, nonatomic) NSDictionary *rawData; // ivar: _rawData
@property (readonly, nonatomic) NSDictionary *rawEvent;
@property (retain, nonatomic) NSArray *sortedPageKeys; // ivar: _sortedPageKeys
@property (retain, nonatomic) NSArray *sortedPrimaryKeys; // ivar: _sortedPrimaryKeys


-(id)_sortKeys:(id)arg0 ;
-(id)initWithEventDictionary:(id)arg0 termCollater:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif