// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGTRANSACTIONTOKEN_H
#define KGTRANSACTIONTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface KGTransactionToken : NSObject

@property (readonly, nonatomic) NSString *stringRepresentation; // ivar: _stringRepresentation
@property (readonly, nonatomic) NSUInteger transactionSequenceNumber; // ivar: _transactionSequenceNumber


-(BOOL)isEqualToToken:(id)arg0 ;
-(id)initForGraph:(id)arg0 transactionSequence:(NSUInteger)arg1 ;
-(id)initForGraph:(id)arg0 withString:(id)arg1 ;
-(id)initForGraphIdentifier:(id)arg0 transactionSequence:(NSUInteger)arg1 ;


@end


#endif