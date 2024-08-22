// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIVERIFICATIONSESSION_H
#define DIVERIFICATIONSESSION_H

@class NSError;

#import <Foundation/Foundation.h>

#import "DIVClient.h"
#import "DIVerificationSessionContext.h"

@interface DIVerificationSession : NSObject {
    DIVClient *_client;
    NSError *_configureError;
}


@property (readonly, nonatomic) DIVerificationSessionContext *context; // ivar: _context


+(void)concludeVerification:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)concludeVerification;
-(void)confirmVerificationCompletedWithFeedback:(id)arg0 ;
-(void)getVerificationResultWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)performVerificationWithAttributes:(id)arg0 completion:(id)arg1 ;
-(void)shareVerificationResultWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif