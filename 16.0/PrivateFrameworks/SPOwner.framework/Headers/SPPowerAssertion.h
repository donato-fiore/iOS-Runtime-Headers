// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPPOWERASSERTION_H
#define SPPOWERASSERTION_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPPowerAssertion : NSObject

@property (nonatomic) unsigned int powerAssertionId; // ivar: _powerAssertionId
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)assertionName;
-(id)assertionType;
-(id)initWithReason:(id)arg0 type:(NSUInteger)arg1 timeout:(CGFloat)arg2 ;
-(id)powerAssertionOption;
-(void)_drop;
-(void)dealloc;
-(void)drop;
-(void)hold;


@end


#endif