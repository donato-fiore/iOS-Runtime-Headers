// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBSTRINGINT64DICTIONARY_H
#define GPBSTRINGINT64DICTIONARY_H

@class NSMutableDictionary;
@protocol GPBDictionaryInternalsProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "GPBMessage.h"

@interface GPBStringInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>

 {
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)getInt64:(*NSInteger)arg0 forKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)computeSerializedSizeAsField:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithInt64s:(*NSInteger)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)enumerateForTextFormat:(id)arg0 ;
-(void)enumerateKeysAndInt64sUsingBlock:(id)arg0 ;
-(void)removeAll;
-(void)removeInt64ForKey:(id)arg0 ;
-(void)setGPBGenericValue:(*unk)arg0 forGPBGenericValueKey:(BOOL)arg1 ;
-(void)setInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1 ;


@end


#endif