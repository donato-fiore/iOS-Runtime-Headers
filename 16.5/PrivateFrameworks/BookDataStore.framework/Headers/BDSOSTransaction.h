// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BDSOSTRANSACTION_H
#define BDSOSTRANSACTION_H

@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface BDSOSTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction; // ivar: _osTransaction


-(id)initWithTransactionName:(char *)arg0 ;
-(void)dealloc;
-(void)endTransaction;


@end


#endif