// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTOBJECTSERIALIZER_H
#define BLTOBJECTSERIALIZER_H


#import <Foundation/Foundation.h>


@interface BLTObjectSerializer : NSObject



+(NSUInteger)sizeOfObject:(id)arg0 ;
+(id)serializeObject:(id)arg0 nulls:(*id)arg1 error:(*id)arg2 ;
+(id)unserializeObject:(id)arg0 nulls:(id)arg1 error:(*id)arg2 ;


@end


#endif