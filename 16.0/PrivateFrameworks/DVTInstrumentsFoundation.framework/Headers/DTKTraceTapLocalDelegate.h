// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTKTRACETAPLOCALDELEGATE_H
#define DTKTRACETAPLOCALDELEGATE_H

@class NSMutableData, NSMutableArray, NSArray, NSString;
@protocol DTTapLocalDelegate;

#import <Foundation/Foundation.h>

#import "DTTapLocal.h"
#import "DTKTraceTapConfig.h"
#import "DTKPSession.h"

@interface DTKTraceTapLocalDelegate : NSObject <DTTapLocalDelegate>

 {
    DTTapLocal *_tap;
    DTKTraceTapConfig *_config;
    BOOL _removeArchivingURLWhenComplete;
    NSMutableData *_triggerIDs;
    NSMutableArray *_actionIDsByTriggerIndex;
    DTKPSession *_session;
    BOOL _stopWasCalled;
    NSArray *_localEventProducers;
    BOOL _usesRawKtraceFile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canFetchWhileArchiving;
-(NSUInteger)_clampBufferSize:(NSUInteger)arg0 ;
-(NSUInteger)_triggerCount;
-(NSUInteger)bufferSizeForConfiguration:(id)arg0 ;
-(id)_getSessionMetadata;
-(id)initWithConfig:(id)arg0 ;
-(id)validateConfig;
-(void)_sendStackshot;
-(void)fetchDataForReason:(NSUInteger)arg0 block:(id)arg1 ;
-(void)pause;
-(void)setTap:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)unpause;


@end


#endif