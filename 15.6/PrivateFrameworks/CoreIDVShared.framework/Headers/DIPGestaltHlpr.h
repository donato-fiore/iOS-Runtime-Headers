// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIPGESTALTHLPR_H
#define DIPGESTALTHLPR_H


#import <Foundation/Foundation.h>


@interface DIPGestaltHlpr : NSObject



+(id)getSharedInstance;
-(BOOL)hasPKASupport;
-(NSInteger)sikaVersion;
-(id)copyAnswer:(struct __CFString *)arg0 ;


@end


#endif