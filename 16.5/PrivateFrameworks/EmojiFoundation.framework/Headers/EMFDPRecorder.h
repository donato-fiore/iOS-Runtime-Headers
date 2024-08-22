// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFDPRECORDER_H
#define EMFDPRECORDER_H

@class NSLock, NSString;
@protocol EMFDPReportingDelegate;

#import <Foundation/Foundation.h>

#import "EMFEmojiToken.h"

@interface EMFDPRecorder : NSObject {
    NSLock *_delegateLock;
}


@property (retain) NSObject<EMFDPReportingDelegate> *delegate; // ivar: _delegate
@property (retain) EMFEmojiToken *emoji; // ivar: _emoji
@property (readonly, nonatomic) NSString *recordingKey;


-(BOOL)report;
-(id)initWithEmoji:(id)arg0 ;


@end


#endif