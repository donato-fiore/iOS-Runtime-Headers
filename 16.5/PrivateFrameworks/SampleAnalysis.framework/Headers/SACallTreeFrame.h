// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACALLTREEFRAME_H
#define SACALLTREEFRAME_H

@class NSMutableArray, NSArray, NSString;
@protocol SAJSONSerialization;


#import "SACallTreeNode.h"
#import "SAFrame.h"

@interface SACallTreeFrame : SACallTreeNode <SAJSONSerialization>

 {
    BOOL _isLeafFrame;
    NSMutableArray *_children;
}


@property (readonly) NSArray *childFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) SAFrame *frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isTruncatedLeafCallstack;
@property (readonly) Class superclass;


+(id)callTreeFrameWithFrame:(id)arg0 startSampleIndex:(NSUInteger)arg1 sampleCount:(NSUInteger)arg2 isLeafFrame:(BOOL)arg3 ;
-(id)initWithFrame:(id)arg0 startSampleIndex:(NSUInteger)arg1 sampleCount:(NSUInteger)arg2 isLeafFrame:(BOOL)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif