// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOTIMECONVERTERPOOL_H
#define CSAUDIOTIMECONVERTERPOOL_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSAudioTimeConverterPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *pool; // ivar: _pool
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)_getAudioTimeConverterWithAudioStreamId:(NSUInteger)arg0 ;
-(id)converterForAudioStreamId:(NSUInteger)arg0 ;
-(id)defaultConverter;
-(id)init;


@end


#endif