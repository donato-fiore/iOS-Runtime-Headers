// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFPROCESSTRANSACTION_H
#define EFPROCESSTRANSACTION_H

@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface EFProcessTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}




+(id)log;
+(id)transactionWithDescription:(id)arg0 ;
-(BOOL)extend;
-(id)description;
-(id)initWithDescription:(id)arg0 ;
-(void)invalidate;


@end


#endif