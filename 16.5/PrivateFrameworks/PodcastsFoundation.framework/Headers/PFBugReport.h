// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFBUGREPORT_H
#define PFBUGREPORT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFBugReport : NSObject {
    ? domain;
    ? system;
    ? errorKind;
}


@property (nonatomic, readonly) NSString *domainString;
@property (nonatomic, readonly) NSString *errorKindString;
@property (nonatomic, readonly) BOOL forceSubmissionAttempt; // ivar: forceSubmissionAttempt
@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) NSString *systemString;


-(id)init;


@end


#endif