// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKLSTREAMLOGSTATSOBSERVER_H
#define CKLSTREAMLOGSTATSOBSERVER_H

@class NSMutableDictionary;


#import "CKLStreamObserver.h"

@interface CKLStreamLogStatsObserver : CKLStreamObserver

@property (retain) NSMutableDictionary *totalCountByLine; // ivar: _totalCountByLine
@property (retain) NSMutableDictionary *totalSizeByLine; // ivar: _totalSizeByLine


-(id)initWithLogTypes:(NSUInteger)arg0 ;
-(void)eventMatched:(id)arg0 ;
-(void)finish;


@end


#endif