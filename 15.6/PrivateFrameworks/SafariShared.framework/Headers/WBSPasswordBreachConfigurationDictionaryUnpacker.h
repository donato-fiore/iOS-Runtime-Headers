// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDBREACHCONFIGURATIONDICTIONARYUNPACKER_H
#define WBSPASSWORDBREACHCONFIGURATIONDICTIONARYUNPACKER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachConfigurationDictionaryUnpacker : NSObject {
    NSDictionary *_dictionary;
}


@property (readonly, nonatomic) BOOL errorOccurred; // ivar: _errorOccurred


-(BOOL)optionalBoolForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(NSUInteger)unsignedIntegerForKey:(id)arg0 minimumValue:(NSUInteger)arg1 maximumValue:(NSUInteger)arg2 ;
-(id)URLForKey:(id)arg0 ;
-(id)_valueOfClass:(Class)arg0 forKey:(id)arg1 required:(BOOL)arg2 ;
-(id)dataFromHexStringForKey:(id)arg0 expectedLength:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)sortedUnsignedIntegerArrayForKey:(id)arg0 minimumValue:(NSUInteger)arg1 maximumValue:(NSUInteger)arg2 ascending:(BOOL)arg3 ;
-(id)stringForKey:(id)arg0 minimumLength:(NSUInteger)arg1 ;


@end


#endif