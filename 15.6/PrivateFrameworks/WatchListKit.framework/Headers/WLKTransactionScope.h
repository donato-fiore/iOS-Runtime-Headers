// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKTRANSACTIONSCOPE_H
#define WLKTRANSACTIONSCOPE_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface WLKTransactionScope : NSObject

@property (readonly) CGFloat delay; // ivar: _delay
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 delay:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif