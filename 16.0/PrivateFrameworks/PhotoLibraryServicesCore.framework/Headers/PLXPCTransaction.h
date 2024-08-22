// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLXPCTRANSACTION_H
#define PLXPCTRANSACTION_H

@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface PLXPCTransaction : NSObject {
    char * _identifier;
    NSObject<OS_os_transaction> *_transaction;
}




+(id)callStackSymbols;
+(id)openXPCTransactionStatus;
+(id)transaction:(char *)arg0 ;
+(void)_startTrackingTransaction:(id)arg0 ;
+(void)_stopTrackingTransaction:(id)arg0 ;
+(void)discardCallStackSymbols:(id)arg0 ;
+(void)initialize;
-(id)_statusDescription;
-(id)description;
-(id)initWithIdentifier:(char *)arg0 ;
-(void)dealloc;
-(void)stillAlive;


@end


#endif