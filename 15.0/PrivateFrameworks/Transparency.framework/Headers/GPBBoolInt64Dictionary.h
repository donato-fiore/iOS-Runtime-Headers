// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBBOOLINT64DICTIONARY_H
#define GPBBOOLINT64DICTIONARY_H

@protocol GPBDictionaryInternalsProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "GPBMessage.h"

@interface GPBBoolInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>

 {
    GPBMessage *_autocreator;
    NSInteger _values;
    BOOL _valueSet;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)getInt64:(*NSInteger)arg0 forKey:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)computeSerializedSizeAsField:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithInt64s:(*NSInteger)arg0 forKeys:(*BOOL)arg1 count:(NSUInteger)arg2 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)enumerateForTextFormat:(id)arg0 ;
-(void)enumerateKeysAndInt64sUsingBlock:(id)arg0 ;
-(void)removeAll;
-(void)removeInt64ForKey:(BOOL)arg0 ;
-(void)setGPBGenericValue:(*unk)arg0 forGPBGenericValueKey:(BOOL)arg1 ;
-(void)setInt64:(NSInteger)arg0 forKey:(BOOL)arg1 ;
-(void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1 ;


@end


#endif