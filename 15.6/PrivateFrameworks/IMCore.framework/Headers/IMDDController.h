// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDDCONTROLLER_H
#define IMDDCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMDDController : NSObject {
    NSObject<OS_dispatch_queue> *_scannerQueue;
}




+(id)sharedInstance;
-(BOOL)_scanAttributedStringWithMessage:(id)arg0 attributedString:(id)arg1 plainText:(id)arg2 ;
-(BOOL)_scanMessageUsingScanner:(id)arg0 attributedString:(id)arg1 ;
-(id)init;
-(id)scannerQueue;
-(struct __DDScanner *)sharedScanner;
-(void)_processLinkInAttributedString:(id)arg0 ;
-(void)scanMessage:(id)arg0 completionBlock:(id)arg1 ;
-(void)scanMessage:(id)arg0 waitUntilDone:(BOOL)arg1 completionBlock:(id)arg2 ;


@end


#endif