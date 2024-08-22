// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBINT64UINT64DICTIONARY_H
#define TRIPBINT64UINT64DICTIONARY_H

@class NSMutableDictionary;
@protocol TRIPBDictionaryInternalsProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "TRIPBMessage.h"

@interface TRIPBInt64UInt64Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>

 {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)getUInt64:(*NSUInteger)arg0 forKey:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)computeSerializedSizeAsField:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithUInt64s:(*NSUInteger)arg0 forKeys:(*NSInteger)arg1 count:(NSUInteger)arg2 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)enumerateForTextFormat:(id)arg0 ;
-(void)enumerateKeysAndUInt64sUsingBlock:(id)arg0 ;
-(void)removeAll;
-(void)removeUInt64ForKey:(NSInteger)arg0 ;
-(void)setTRIPBGenericValue:(*unk)arg0 forTRIPBGenericValueKey:(BOOL)arg1 ;
-(void)setUInt64:(NSUInteger)arg0 forKey:(NSInteger)arg1 ;
-(void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1 ;


@end


#endif