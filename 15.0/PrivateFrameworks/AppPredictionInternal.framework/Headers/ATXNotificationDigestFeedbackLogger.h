// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONDIGESTFEEDBACKLOGGER_H
#define ATXNOTIFICATIONDIGESTFEEDBACKLOGGER_H

@protocol ATXNotificationDigestFeedbackProtocol;

#import <Foundation/Foundation.h>


@interface ATXNotificationDigestFeedbackLogger : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> *_digestFeedback;
}




-(id)_getBundleIdAndEngagementsForDigestGroup:(id)arg0 onDigest:(id)arg1 ;
-(id)init;
-(id)initWithDigestFeedback:(id)arg0 ;
-(void)logFeedbackForAnnotatedDigest:(id)arg0 ;


@end


#endif