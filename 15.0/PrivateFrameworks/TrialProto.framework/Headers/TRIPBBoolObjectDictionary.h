// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBBOOLOBJECTDICTIONARY_H
#define TRIPBBOOLOBJECTDICTIONARY_H

@protocol TRIPBDictionaryInternalsProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "TRIPBMessage.h"

@interface TRIPBBoolObjectDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>

 {
    TRIPBMessage *_autocreator;
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
-(void)setObject:(id)arg0 forKey:(BOOL)arg1 ;
-(void)setTRIPBGenericValue:(*unk)arg0 forTRIPBGenericValueKey:(BOOL)arg1 ;
-(void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1 ;


@end


#endif