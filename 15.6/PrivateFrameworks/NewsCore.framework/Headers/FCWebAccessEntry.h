// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCWEBACCESSENTRY_H
#define FCWEBACCESSENTRY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface FCWebAccessEntry : NSObject {
    NSString *_email;
    NSString *_purchaseID;
    NSString *_purchaseReceipt;
    NSDate *_lastRetryAttemptTime;
    NSString *_identifier;
    NSString *_tagID;
}


@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSDate *lastRetryAttemptTime;
@property (readonly, nonatomic) NSString *purchaseID;
@property (readonly, nonatomic) NSString *purchaseReceipt;




@end


#endif