// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASLAZYPLIST_H
#define _PASLAZYPLIST_H


#import <Foundation/Foundation.h>


@interface _PASLazyPlist : NSObject



+(BOOL)isLazyPlistLikelyContainedInData:(id)arg0 format:(*NSUInteger)arg1 ;
+(BOOL)isLazyPlistLikelyContainedInFileAtPath:(id)arg0 format:(*NSUInteger)arg1 ;
+(id)arrayWithData:(id)arg0 error:(*id)arg1 ;
+(id)arrayWithPath:(id)arg0 error:(*id)arg1 ;
+(id)dataWithPropertyList:(id)arg0 error:(*id)arg1 ;
+(id)dataWithPropertyList:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)deserializationStatsHandler:(SEL)arg0 ;
+(id)dictionaryWithData:(id)arg0 error:(*id)arg1 ;
+(id)dictionaryWithPath:(id)arg0 error:(*id)arg1 ;
+(id)fileBackedDataWithPropertyList:(id)arg0 appendedToFd:(int)arg1 format:(NSUInteger)arg2 startOfs:(*NSInteger)arg3 error:(*id)arg4 ;
+(id)fileBackedDataWithPropertyList:(id)arg0 appendedToFd:(int)arg1 startOfs:(*NSInteger)arg2 error:(*id)arg3 ;
+(id)fileBackedDataWithPropertyList:(id)arg0 writtenToPath:(id)arg1 error:(*id)arg2 ;
+(id)fileBackedDataWithPropertyList:(id)arg0 writtenToPath:(id)arg1 format:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)lazyPlistArrayWithPlistArray:(id)arg0 ;
+(id)lazyPlistDictionaryWithPlistDictionary:(id)arg0 ;
+(id)lazyPlistWithPlist:(id)arg0 ;
+(id)propertyListWithData:(id)arg0 error:(*id)arg1 ;
+(id)propertyListWithPath:(id)arg0 error:(*id)arg1 ;
+(id)propertyListWithPath:(id)arg0 fileRange:(struct _NSRange )arg1 error:(*id)arg2 ;
+(id)serializationStatsHandler:(SEL)arg0 ;
+(void)setDeserializationStatsHandler:(id)arg0 ;
+(void)setSerializationStatsHandler:(id)arg0 ;
-(id)init;


@end


#endif