// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIDPRECORDER_H
#define TIDPRECORDER_H

@class NSLock, NSArray, NSString;
@protocol TIDPReportingDelegate;

#import <Foundation/Foundation.h>

#import "HCHuffmanCoder.h"
#import "TITypingSession.h"
#import "TITypingSessionAligned.h"

@interface TIDPRecorder : NSObject {
    NSLock *_delegateLock;
}


@property (readonly, nonatomic) HCHuffmanCoder *characterCoder; // ivar: _characterCoder
@property (readonly, nonatomic) NSArray *characterExplodedRecords;
@property (retain, nonatomic) NSObject<TIDPReportingDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *recordingKey;
@property (readonly, nonatomic) NSString *recordingKeyLocaleSubstring;
@property (readonly, nonatomic) NSArray *records;
@property (readonly, nonatomic) TITypingSession *typingSession; // ivar: _typingSession
@property (readonly, nonatomic) TITypingSessionAligned *typingSessionAligned; // ivar: _typingSessionAligned
@property (readonly, nonatomic) HCHuffmanCoder *wordCoder; // ivar: _wordCoder


-(BOOL)report;
-(id)initWithTypingSession:(id)arg0 aligned:(id)arg1 ;
-(void)_prepareCharacterCoderMatchingSession;
-(void)_prepareWordCoderMatchingSession;


@end


#endif