// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFIMAPDOWNLOAD_H
#define MFIMAPDOWNLOAD_H

@class NSMutableArray, MFCountingDataConsumer, MFBaseFilterDataConsumer;

#import <Foundation/Foundation.h>


@interface MFIMAPDownload : NSObject {
    unsigned int _uid;
    NSMutableArray *_pendingFetchResults;
    MFCountingDataConsumer *_countingConsumer;
}


@property (readonly, nonatomic) MFBaseFilterDataConsumer *mainConsumer; // ivar: _mainConsumer


-(BOOL)isComplete;
-(NSUInteger)bytesFetched;
-(NSUInteger)expectedLength;
-(NSUInteger)lengthOfDataBeforeLineConversion;
-(id)data;
-(id)error;
-(id)initWithUid:(unsigned int)arg0 ;
-(unsigned int)uid;
-(void)addCommandsToPipeline:(id)arg0 withCache:(id)arg1 ;
-(void)dealloc;
-(void)handleFetchResult:(id)arg0 ;
-(void)processResults;
-(void)setError:(id)arg0 ;


@end


#endif