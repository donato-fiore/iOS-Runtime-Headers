// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTTRANSACTION_H
#define BLTTRANSACTION_H

@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface BLTTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction; // ivar: _osTransaction


+(id)transactionWithDescription:(id)arg0 ;
-(id)initWithDescription:(id)arg0 ;


@end


#endif