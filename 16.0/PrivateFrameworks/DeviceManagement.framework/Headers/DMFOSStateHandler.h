// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFOSSTATEHANDLER_H
#define DMFOSSTATEHANDLER_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface DMFOSStateHandler : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) NSUInteger handle; // ivar: _handle
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(id)initWithQueue:(id)arg0 name:(id)arg1 stateHandlerBlock:(id)arg2 ;
-(struct os_state_data_s *)_serializeState;
-(void)dealloc;


@end


#endif