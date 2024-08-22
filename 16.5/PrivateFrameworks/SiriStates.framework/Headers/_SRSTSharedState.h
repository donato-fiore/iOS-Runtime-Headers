// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SRSTSHAREDSTATE_H
#define _SRSTSHAREDSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _SRSTSharedState : NSObject {
    ? name;
    ? parent;
    ? eventHandler;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *name;


+(id)passive;
+(id)preparingToServe;
+(id)serving;
+(id)unshared;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)makeProxy;


@end


#endif