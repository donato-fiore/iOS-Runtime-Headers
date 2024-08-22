// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSMESSAGEOBSERVERHANDLE_H
#define SIRIANALYTICSMESSAGEOBSERVERHANDLE_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsMessageObserverHandle : NSObject {
    id *_messagesReceived;
    id *_willRelease;
}




// -(id)initWithMessagesReceived:(id)arg0 willReleaseHandle:(unk)arg1  ;
-(void)dealloc;
-(void)messagesReceived:(id)arg0 ;


@end


#endif