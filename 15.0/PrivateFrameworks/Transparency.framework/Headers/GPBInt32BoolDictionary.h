// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBINT32BOOLDICTIONARY_H
#define GPBINT32BOOLDICTIONARY_H

@class NSMutableDictionary;
@protocol GPBDictionaryInternalsProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "GPBMessage.h"

@interface GPBInt32BoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>

 {
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)getBool:(*BOOL)arg0 forKey:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)computeSerializedSizeAsField:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBools:(*BOOL)arg0 forKeys:(*int)arg1 count:(NSUInteger)arg2 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)enumerateForTextFormat:(id)arg0 ;
-(void)enumerateKeysAndBoolsUsingBlock:(id)arg0 ;
-(void)removeAll;
-(void)removeBoolForKey:(int)arg0 ;
-(void)setBool:(BOOL)arg0 forKey:(int)arg1 ;
-(void)setGPBGenericValue:(*unk)arg0 forGPBGenericValueKey:(BOOL)arg1 ;
-(void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1 ;


@end


#endif