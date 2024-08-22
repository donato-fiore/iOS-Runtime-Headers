// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRPASSFAILISSUERESPONDER_H
#define XRPASSFAILISSUERESPONDER_H

@class NSMutableArray, NSString;
@protocol XRIssueResponder, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface XRPassFailIssueResponder : NSObject <XRIssueResponder>

 {
    id<XRIssueResponder> *_nextResponder;
    NSMutableArray *_uniqueErrors;
    NSObject<OS_dispatch_queue> *_uniqueErrorsQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL failureOccurred;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)failures;
-(id)init;
-(id)initWithNextResponder:(id)arg0 ;
-(void)handleIssue:(id)arg0 type:(short)arg1 from:(id)arg2 ;


@end


#endif