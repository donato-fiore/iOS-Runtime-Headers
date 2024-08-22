// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCOMPRESSIONENGINE_H
#define _HKCOMPRESSIONENGINE_H

@class NSMutableData;
@protocol _HKStreamingDestination;

#import <Foundation/Foundation.h>


@interface _HKCompressionEngine : NSObject

@property (nonatomic) int algorithm; // ivar: _algorithm
@property (weak, nonatomic) NSObject<_HKStreamingDestination> *destination; // ivar: _destination
@property (retain, nonatomic) NSMutableData *destinationBuffer; // ivar: _destinationBuffer
@property (nonatomic) int operation; // ivar: _operation
@property (readonly, nonatomic) NSMutableData *sinkContent; // ivar: _sinkContent
@property (nonatomic) *? stream; // ivar: _stream


+(id)processDataWithFunction:(NSInteger)arg0 algorithm:(NSInteger)arg1 content:(id)arg2 progressBlock:(id)arg3 ;
-(BOOL)_initializeStream;
-(BOOL)_processIncomingData:(*void)arg0 length:(NSUInteger)arg1 flags:(int)arg2 ;
-(NSUInteger)_deliverDestinationContent;
-(id)initWithFunction:(NSInteger)arg0 algorithm:(NSInteger)arg1 destination:(id)arg2 ;
-(void)_decodeEngineFunction:(NSInteger)arg0 algorithm:(NSInteger)arg1 ;
-(void)_gatherReadSinkContent:(id)arg0 ;
-(void)dealloc;
-(void)sourceContentFinished;
-(void)writeSourceContent:(id)arg0 ;


@end


#endif