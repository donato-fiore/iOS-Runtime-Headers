// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIPGESTALTHLPR_H
#define DIPGESTALTHLPR_H

@protocol DIPGestaltHlprProtocol;

#import <Foundation/Foundation.h>


@interface DIPGestaltHlpr : NSObject <DIPGestaltHlprProtocol>





+(id)getSharedInstance;
-(BOOL)hasPKASupport;
-(BOOL)isFaceIDDevice;
-(BOOL)isIPad;
-(NSInteger)sikaVersion;
-(id)copyAnswer:(struct __CFString *)arg0 ;


@end


#endif