// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI230NEWSWEBARCHIVEURLSCHEMEHANDLER_H
#define _TTC7NEWSUI230NEWSWEBARCHIVEURLSCHEMEHANDLER_H

@protocol SWURLSchemeHandler, WKURLSchemeTask;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI230NewsWebArchiveURLSchemeHandler : NSObject <SWURLSchemeHandler>

 {
    ? webArchiveService;
}


@property (nonatomic, readonly) NSObject<WKURLSchemeTask> *task; // ivar: task


-(id)init;
-(void)cancel;
-(void)finish;
-(void)start;


@end


#endif