// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPPASTEBOARDREADCHANNEL_H
#define TSPPASTEBOARDREADCHANNEL_H

@class NSString;
@protocol TSUStreamReadChannel, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPPasteboard.h"

@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel>

 {
    NSObject<OS_dispatch_queue> *_readQueue;
    TSPPasteboard *_pasteboard;
    NSString *_pasteboardType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPasteboard:(id)arg0 pasteboardType:(id)arg1 ;
-(void)_close;
-(void)close;
-(void)readWithHandler:(id)arg0 ;
-(void)readWithHandlerAndWait:(id)arg0 ;


@end


#endif