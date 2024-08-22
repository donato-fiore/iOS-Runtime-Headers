// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRSTSTATE_H
#define SRSTSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SRSTState : NSObject {
    ? name;
    ? parent;
    ? eventHandler;
}


@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *name;


+(id)analyzing;
+(id)available;
+(id)disabled;
+(id)postResponse;
+(id)processing;
+(id)responding;
+(id)resting;
+(id)understanding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)makeProxy;


@end


#endif