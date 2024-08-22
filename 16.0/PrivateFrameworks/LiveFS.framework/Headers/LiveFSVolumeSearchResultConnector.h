// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LIVEFSVOLUMESEARCHRESULTCONNECTOR_H
#define LIVEFSVOLUMESEARCHRESULTCONNECTOR_H

@class NSDate, NSCondition, NSMutableArray, NSMutableData, NSXPCConnection, NSString;
@protocol LiveFSSearchResults;

#import <Foundation/Foundation.h>


@interface LiveFSVolumeSearchResultConnector : NSObject <LiveFSSearchResults>

 {
    unsigned int pendingData;
    BOOL waiter;
    NSDate *nextReplyDeadline;
    NSCondition *condVar;
    NSMutableArray *pendingPaths;
    NSMutableData *pendingAttributes;
    unsigned int pendingAttributesValidSize;
    unsigned int pendingAttributesSize;
    NSMutableArray *pendingXAttrs;
}


@property BOOL active; // ivar: _active
@property (retain) NSXPCConnection *conn; // ivar: _conn
@property unsigned int currentCredits; // ivar: _currentCredits
@property unsigned int maxData; // ivar: _maxData
@property CGFloat maxDelay; // ivar: _maxDelay
@property (retain) NSString *ourToken; // ivar: _ourToken
@property BOOL throttlingActive; // ivar: _throttlingActive


+(id)newSearchConnector:(id)arg0 connection:(id)arg1 maxData:(unsigned int)arg2 maxDelay:(CGFloat)arg3 initialCredits:(unsigned int)arg4 ;
-(id)initForToken:(id)arg0 connection:(id)arg1 maxData:(unsigned int)arg2 maxDelay:(CGFloat)arg3 initialCredits:(unsigned int)arg4 ;
-(int)flushBufferedResults:(id)arg0 ;
-(int)grabACredit;
-(void)addSearchResult:(id)arg0 attributes:(struct _LIFileAttributes *)arg1 attributeSize:(unsigned int)arg2 xAttrs:(id)arg3 ;
-(void)replenishCredits:(unsigned int)arg0 reply:(id)arg1 ;
-(void)tokenDone:(int)arg0 ;


@end


#endif