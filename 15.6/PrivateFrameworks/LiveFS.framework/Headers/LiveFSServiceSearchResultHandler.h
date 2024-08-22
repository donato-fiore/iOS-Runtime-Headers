// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSSERVICESEARCHRESULTHANDLER_H
#define LIVEFSSERVICESEARCHRESULTHANDLER_H

@class NSDate, NSCondition, NSMutableArray, NSMutableData, NSXPCConnection, NSString;
@protocol NSFileProviderLiveItemSearchResults;

#import <Foundation/Foundation.h>


@interface LiveFSServiceSearchResultHandler : NSObject <NSFileProviderLiveItemSearchResults>

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


+(id)newSearchHandler:(id)arg0 connection:(id)arg1 maxData:(unsigned int)arg2 maxDelay:(CGFloat)arg3 initialCredits:(unsigned int)arg4 ;
-(id)initForToken:(id)arg0 connection:(id)arg1 maxData:(unsigned int)arg2 maxDelay:(CGFloat)arg3 initialCredits:(unsigned int)arg4 ;
-(int)flushBufferedResults:(id)arg0 ;
-(int)grabACredit;
-(void)LISearchReplenishCredits:(unsigned int)arg0 reply:(id)arg1 ;
-(void)LISearchResult:(id)arg0 itemAttributes:(struct _LIFileAttributes *)arg1 attributeSize:(unsigned int)arg2 itemXAttrs:(id)arg3 ;
-(void)LISearchTokenDone:(int)arg0 ;


@end


#endif