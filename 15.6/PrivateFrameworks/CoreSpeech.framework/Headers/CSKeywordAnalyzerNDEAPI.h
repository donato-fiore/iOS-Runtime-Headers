// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSKEYWORDANALYZERNDEAPI_H
#define CSKEYWORDANALYZERNDEAPI_H

@class NSMutableData;
@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;

#import <Foundation/Foundation.h>


@interface CSKeywordAnalyzerNDEAPI : NSObject {
    **void _ndeObject;
    NSMutableData *_currentBlob;
}


@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (weak, nonatomic) NSObject<CSKeywordAnalyzerNDEAPIScoreDelegate> *delegate; // ivar: _delegate


-(id)checkForTriggerWithBytes:(*short)arg0 withNumberOfSamples:(NSInteger)arg1 ;
-(id)initWithBlob:(id)arg0 ;
-(id)processAudioBytes:(*void)arg0 withNumberOfSamples:(NSInteger)arg1 ;
-(id)processAudioChunk:(id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif