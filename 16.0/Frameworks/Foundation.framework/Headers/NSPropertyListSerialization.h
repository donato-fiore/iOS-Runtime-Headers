// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPROPERTYLISTSERIALIZATION_H
#define NSPROPERTYLISTSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface NSPropertyListSerialization : NSObject



+(BOOL)propertyList:(id)arg0 isValidForFormat:(NSUInteger)arg1 ;
+(NSInteger)writePropertyList:(id)arg0 toStream:(id)arg1 format:(NSUInteger)arg2 options:(NSUInteger)arg3 error:(*id)arg4 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)dataFromPropertyList:(id)arg0 format:(NSUInteger)arg1 errorDescription:(*id)arg2 ;
+(id)dataWithPropertyList:(id)arg0 format:(NSUInteger)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)propertyListFromData:(id)arg0 mutabilityOption:(NSUInteger)arg1 format:(*NSUInteger)arg2 errorDescription:(*id)arg3 ;
+(id)propertyListWithData:(id)arg0 options:(NSUInteger)arg1 format:(*NSUInteger)arg2 error:(*id)arg3 ;
+(id)propertyListWithStream:(id)arg0 options:(NSUInteger)arg1 format:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif