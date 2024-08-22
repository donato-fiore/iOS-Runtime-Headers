// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODIGESTALTHLPR_H
#define ODIGESTALTHLPR_H


#import <Foundation/Foundation.h>


@interface ODIGestaltHlpr : NSObject



+(id)getSharedInstance;
-(BOOL)hasPKASupport;
-(NSInteger)sikaVersion;
-(id)copyAnswer:(struct __CFString *)arg0 ;


@end


#endif