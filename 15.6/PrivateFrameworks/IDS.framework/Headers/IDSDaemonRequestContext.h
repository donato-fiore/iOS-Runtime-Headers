// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDAEMONREQUESTCONTEXT_H
#define IDSDAEMONREQUESTCONTEXT_H

@class IMTimer;

#import <Foundation/Foundation.h>

#import "IDSDaemonResponseHandler.h"

@interface IDSDaemonRequestContext : NSObject {
    IDSDaemonResponseHandler *_responseHandler;
    id *_timeoutBlock;
    IMTimer *_systemTimer;
}




// -(id)initWithResponseHandler:(id)arg0 timeoutBlock:(id)arg1 systemTimer:(unk)arg2  ;
-(id)responseHandler;
-(id)systemTimer;
-(id)timeoutBlock:(SEL)arg0 ;
-(void)dealloc;
-(void)killSystemTimer;


@end


#endif