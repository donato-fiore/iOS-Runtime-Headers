// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STPRESETSVALUECHANGEDCOREANALYTICSEVENT_H
#define STPRESETSVALUECHANGEDCOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STPresetsValueChangedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly, copy) NSString *description;
@property (readonly) NSString *fieldName; // ivar: _fieldName
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSString *recommendedPresetId; // ivar: _recommendedPresetId
@property (readonly) id *recommendedValue; // ivar: _recommendedValue
@property (readonly) id *selectedValue; // ivar: _selectedValue
@property (readonly) NSString *sessionId; // ivar: _sessionId


-(id)initWithSessionId:(id)arg0 recommendedPresetId:(id)arg1 fieldName:(id)arg2 recommendedValue:(id)arg3 selectedValue:(id)arg4 ;


@end


#endif