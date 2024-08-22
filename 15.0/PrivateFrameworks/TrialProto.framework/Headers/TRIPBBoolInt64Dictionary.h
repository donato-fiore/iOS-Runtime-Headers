// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBBOOLINT64DICTIONARY_H
#define TRIPBBOOLINT64DICTIONARY_H

@protocol TRIPBDictionaryInternalsProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "TRIPBMessage.h"

@interface TRIPBBoolInt64Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>

 {
    TRIPBMessage *_autocreator;
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
-(void)dealloc;
-(void)enumerateForTextFormat:(id)arg0 ;
-(void)enumerateKeysAndInt64sUsingBlock:(id)arg0 ;
-(void)removeAll;
-(void)removeInt64ForKey:(BOOL)arg0 ;
-(void)setInt64:(NSInteger)arg0 forKey:(BOOL)arg1 ;
-(void)setTRIPBGenericValue:(*unk)arg0 forTRIPBGenericValueKey:(BOOL)arg1 ;
-(void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1 ;


@end


#endif