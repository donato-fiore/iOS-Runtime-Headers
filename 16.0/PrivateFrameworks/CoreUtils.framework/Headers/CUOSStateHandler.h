// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUOSSTATEHANDLER_H
#define CUOSSTATEHANDLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CUOSStateHandler : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 dispatchQueue:(id)arg1 handler:(id)arg2 ;
-(struct os_state_data_s *)_generateState;
-(void)dealloc;
-(void)remove;


@end


#endif