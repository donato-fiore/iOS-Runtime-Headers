// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHDATABASEASSERTION_H
#define ACHDATABASEASSERTION_H

@class HDAssertion;

#import <Foundation/Foundation.h>


@interface ACHDatabaseAssertion : NSObject

@property (retain, nonatomic) HDAssertion *assertion; // ivar: _assertion


+(id)assertionWithDatabase:(id)arg0 identifier:(id)arg1 error:(*id)arg2 ;
+(id)assertionWithDatabase:(id)arg0 identifier:(id)arg1 timeout:(CGFloat)arg2 error:(*id)arg3 ;
-(id)initWithHDAssertion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif