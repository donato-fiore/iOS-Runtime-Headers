// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPRINTQUEUEITEM_H
#define SFPRINTQUEUEITEM_H

@class _WKFrameHandle;

#import <Foundation/Foundation.h>


@interface SFPrintQueueItem : NSObject {
    BOOL _completed;
    id *_completionHandler;
}


@property (readonly, nonatomic) _WKFrameHandle *frameHandle; // ivar: _frameHandle
@property (readonly, nonatomic) BOOL initiatedByWebContent; // ivar: _initiatedByWebContent


-(id)initWithFrameHandle:(id)arg0 initiatedByWebContent:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)completeWithResult:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif