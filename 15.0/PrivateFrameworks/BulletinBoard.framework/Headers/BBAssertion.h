// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBASSERTION_H
#define BBASSERTION_H

@class NSString;
@protocol BBAssertionDelegate;

#import <Foundation/Foundation.h>


@interface BBAssertion : NSObject {
    NSString *_identifier;
    NSUInteger _transactionID;
}


@property (weak, nonatomic) NSObject<BBAssertionDelegate> *delegate; // ivar: _delegate


-(NSUInteger)transactionID;
-(id)identifier;
-(id)initWithDelegate:(id)arg0 identifier:(id)arg1 ;
-(void)dealloc;
-(void)increaseOrIgnoreTransactionID:(NSUInteger)arg0 ;


@end


#endif