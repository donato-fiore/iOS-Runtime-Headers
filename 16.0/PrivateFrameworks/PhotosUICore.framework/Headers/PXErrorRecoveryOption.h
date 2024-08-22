// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXERRORRECOVERYOPTION_H
#define PXERRORRECOVERYOPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXErrorRecoveryOption : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)recoveryOptionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
-(void)_attemptRecoveryFromError:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif