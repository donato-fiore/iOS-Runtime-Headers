// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSRBSKEEPALIVE_H
#define AMSRBSKEEPALIVE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSRBSKeepAlive : NSObject {
    ? keepAlive;
    ? name;
}


@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSInteger style; // ivar: style


+(id)keepAliveWithName:(id)arg0 ;
+(id)keepAliveWithName:(id)arg0 style:(NSInteger)arg1 ;
+(void)keepAliveWithName:(id)arg0 style:(NSInteger)arg1 block:(id)arg2 ;
-(id)init;
-(void)invalidate;


@end


#endif