// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPFEATUREKEYWORD_H
#define IPFEATUREKEYWORD_H

@class NSMutableDictionary, NSArray, NSString;


#import "IPFeature.h"

@interface IPFeatureKeyword : IPFeature

@property (readonly) NSMutableDictionary *contextDictionary; // ivar: _contextDictionary
@property (retain, nonatomic) NSArray *eventTypes; // ivar: _eventTypes
@property (retain) NSString *keywordString; // ivar: _keywordString
@property NSUInteger type; // ivar: _type


+(id)featureKeywordWithType:(NSUInteger)arg0 string:(id)arg1 matchRange:(struct _NSRange )arg2 ;
-(id)description;
-(id)humandReadableEventTypes;
-(void)addEventType:(id)arg0 ;


@end


#endif