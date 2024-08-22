// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTRANSACTIONENDEVENT_H
#define STSTRANSACTIONENDEVENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "STSCredential.h"

@interface STSTransactionEndEvent : NSObject

@property (nonatomic) BOOL background; // ivar: _background
@property (retain, nonatomic) STSCredential *credential; // ivar: _credential
@property (retain, nonatomic) NSDictionary *parsedInfo; // ivar: _parsedInfo
@property (retain, nonatomic) NSString *readerIdentifier; // ivar: _readerIdentifier
@property (nonatomic) NSUInteger status; // ivar: _status
@property (retain, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


-(id)initWithCredential:(id)arg0 andNearFieldEndEvent:(id)arg1 ;


@end


#endif