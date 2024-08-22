// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKDESERIALIZER_H
#define IKDESERIALIZER_H


#import <Foundation/Foundation.h>


@interface IKDeserializer : NSObject



+(BOOL)token:(*id)arg0 andTokenSecret:(*id)arg1 fromQlineString:(id)arg2 ;
+(id)_URLForKey:(id)arg0 inDictionary:(id)arg1 ;
+(id)_dateForKey:(id)arg0 inDictionary:(id)arg1 ;
+(id)_normalizedObjectForKey:(id)arg0 inDictionary:(id)arg1 ;
+(id)objectFromJSONString:(id)arg0 ;


@end


#endif