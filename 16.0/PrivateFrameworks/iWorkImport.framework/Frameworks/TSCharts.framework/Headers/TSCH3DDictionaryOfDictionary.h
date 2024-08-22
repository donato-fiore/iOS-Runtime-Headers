// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DDICTIONARYOFDICTIONARY_H
#define TSCH3DDICTIONARYOFDICTIONARY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSCH3DDictionaryOfDictionary : NSObject {
    NSMutableDictionary *_dictionary;
}




-(id)description;
-(id)init;
-(id)objectForFirstLevelKey:(id)arg0 secondLevelKey:(id)arg1 ;
-(void)addEntriesFromDictionaryOfDictionary:(id)arg0 ;
-(void)removeObjectForFirstLevelKey:(id)arg0 secondLevelKey:(id)arg1 ;
-(void)setObject:(id)arg0 forFirstLevelKey:(id)arg1 secondLevelKey:(id)arg2 ;


@end


#endif