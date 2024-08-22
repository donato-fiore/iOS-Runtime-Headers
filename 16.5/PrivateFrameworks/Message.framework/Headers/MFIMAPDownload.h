// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(BOOL)isSuccessful;
-(NSUInteger)bytesFetched;
-(NSUInteger)expectedLength;
-(NSUInteger)lengthOfDataBeforeLineConversion;
-(id)error;
-(id)initWithUid:(unsigned int)arg0 ;
-(unsigned int)uid;
-(void)addCommandsToPipeline:(id)arg0 withCache:(id)arg1 ;
-(void)handleFetchResult:(id)arg0 ;
-(void)processResults;
-(void)setError:(id)arg0 ;


@end


#endif