// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HISTSTATLINKEDLISTNODE_H
#define HISTSTATLINKEDLISTNODE_H


#import <Foundation/Foundation.h>

#import "HistStatLinkedListNode.h"

@interface HistStatLinkedListNode : NSObject

@property *float avgValBuffer; // ivar: _avgValBuffer
@property *float maxValBuffer; // ivar: _maxValBuffer
@property *float minValBuffer; // ivar: _minValBuffer
@property (retain) HistStatLinkedListNode *next; // ivar: _next
@property NSUInteger numOfProcessedFrames; // ivar: _numOfProcessedFrames
@property **float prctValBuffer; // ivar: _prctValBuffer
@property (retain) HistStatLinkedListNode *prev; // ivar: _prev
@property float prevAvgVal; // ivar: _prevAvgVal
@property *float prevNormHistHeight; // ivar: _prevNormHistHeight
@property *float stdValBuffer; // ivar: _stdValBuffer
@property NSInteger streamId; // ivar: _streamId


-(id)initWithStreamId:(NSInteger)arg0 bufferSize:(unsigned short)arg1 ;
-(void)dealloc;


@end


#endif