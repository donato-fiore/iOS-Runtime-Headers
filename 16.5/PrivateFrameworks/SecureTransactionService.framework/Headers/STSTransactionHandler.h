// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTRANSACTIONHANDLER_H
#define STSTRANSACTIONHANDLER_H



#import "STSHandler.h"
#import "STSSession.h"

@interface STSTransactionHandler : STSHandler

@property (readonly, weak, nonatomic) STSSession *parent; // ivar: _parent


-(id)initWithParent:(id)arg0 ;
-(id)startTransactionWithAuthorization:(id)arg0 options:(NSUInteger)arg1 ;
-(id)stopTransaction;


@end


#endif