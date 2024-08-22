// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKJSONCONVERTER_H
#define CRKJSONCONVERTER_H


#import <Foundation/Foundation.h>


@interface CRKJSONConverter : NSObject



+(id)JSONArrayForArray:(id)arg0 ;
+(id)JSONDictionaryForDictionary:(id)arg0 ;
+(id)bestEffortJSONObjectForObject:(id)arg0 ;
+(id)stringForDate:(id)arg0 ;
+(id)stringForObject:(id)arg0 ;


@end


#endif