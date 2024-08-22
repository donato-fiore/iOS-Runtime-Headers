// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASTREAMFRAMEREADER_H
#define HMDDATASTREAMFRAMEREADER_H

@protocol OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface HMDDataStreamFrameReader : NSObject {
    NSObject<OS_dispatch_data> *_partialFrame;
    BOOL _headerInfoRead;
    BOOL _streamFailed;
    unsigned char _currentframeType;
    NSUInteger _payloadLength;
}




+(id)logCategory;
-(BOOL)hasCompleteFrame;
-(BOOL)hasFailed;
-(BOOL)hasPartialData;
-(NSUInteger)_getCurrentFrameSize;
-(NSUInteger)bytesNeededForCurrentFrame;
-(id)init;
-(id)popRawFrame;
-(void)_readFrameHeaderIfPossible;
-(void)pushFrameData:(id)arg0 ;
-(void)reset;


@end


#endif