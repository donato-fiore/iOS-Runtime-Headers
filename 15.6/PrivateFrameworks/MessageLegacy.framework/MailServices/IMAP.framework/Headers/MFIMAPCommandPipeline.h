// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFIMAPCOMMANDPIPELINE_H
#define MFIMAPCOMMANDPIPELINE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MFIMAPCommandPipeline : NSObject {
    NSUInteger _chunkSize;
    NSUInteger _expectedSize;
    BOOL _full;
    BOOL _sending;
    NSMutableArray *_fetchUnits;
}




-(BOOL)isFull;
-(BOOL)isSending;
-(NSUInteger)chunkSize;
-(NSUInteger)expectedSize;
-(id)failureResponsesFromSendingCommandsWithConnection:(id)arg0 ;
-(void)_removeFetchUnitMatchingResponse:(id)arg0 ;
-(void)addFetchCommandForUid:(unsigned int)arg0 fetchItem:(id)arg1 expectedLength:(NSUInteger)arg2 bodyDataConsumer:(id)arg3 consumerSection:(id)arg4 ;
-(void)dealloc;
-(void)setChunkSize:(NSUInteger)arg0 ;
-(void)setFull:(BOOL)arg0 ;


@end


#endif