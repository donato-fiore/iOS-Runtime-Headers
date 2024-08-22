// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLTRANSACTION_H
#define CPLTRANSACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CPLTransaction : NSObject {
    BOOL _dirty;
}


@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(NSUInteger)transactionCount;
+(id)newTransactionWithIdentifier:(id)arg0 description:(id)arg1 keepPower:(BOOL)arg2 ;
+(id)transactions;
+(void)beginTransactionWithIdentifier:(id)arg0 description:(id)arg1 keepPower:(BOOL)arg2 ;
+(void)endTransactionWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 description:(id)arg1 keepPower:(BOOL)arg2 ;
-(void)dealloc;
-(void)endTransaction;


@end


#endif