// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBBOOLOBJECTDICTIONARY_H
#define GPBBOOLOBJECTDICTIONARY_H

@protocol GPBDictionaryInternalsProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "GPBMessage.h"

@interface GPBBoolObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>

 {
    GPBMessage *_autocreator;
    id _values;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInitialized;
-(NSUInteger)computeSerializedSizeAsField:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deepCopyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*BOOL)arg1 count:(NSUInteger)arg2 ;
-(id)objectForKey:(BOOL)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)enumerateForTextFormat:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)removeAll;
-(void)removeObjectForKey:(BOOL)arg0 ;
-(void)setGPBGenericValue:(*unk)arg0 forGPBGenericValueKey:(BOOL)arg1 ;
-(void)setObject:(id)arg0 forKey:(BOOL)arg1 ;
-(void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1 ;


@end


#endif