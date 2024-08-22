// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDISPATCHGROUP_H
#define CSDISPATCHGROUP_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CSDispatchGroup : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    int _dispatchGroupCounter;
}




-(NSInteger)waitWithTimeout:(NSUInteger)arg0 ;
-(id)init;
-(void)enter;
-(void)leave;


@end


#endif