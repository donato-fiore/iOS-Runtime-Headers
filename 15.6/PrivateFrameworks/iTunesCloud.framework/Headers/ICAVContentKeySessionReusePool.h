// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICAVCONTENTKEYSESSIONREUSEPOOL_H
#define ICAVCONTENTKEYSESSIONREUSEPOOL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ICAVContentKeySessionReusePool : NSObject {
    os_unfair_lock_s _lock;
}


@property (nonatomic) NSInteger currentBatchNumber; // ivar: _currentBatchNumber
@property (nonatomic) NSInteger maxUseCount; // ivar: _maxUseCount
@property (retain, nonatomic) NSMutableArray *reusables; // ivar: _reusables


+(id)defaultPool;
-(id)init;
-(id)reusableWithIdentifier:(id)arg0 nonreusableTokens:(id)arg1 ;
-(void)didReceiveFairPlayError:(id)arg0 ;
-(void)invalidateAllReusables;
-(void)mediaServicesWereLost;
-(void)mediaServicesWereReset;
-(void)reuse:(id)arg0 ;


@end


#endif