// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DISPATCHGROUPWRAPPER_H
#define DISPATCHGROUPWRAPPER_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface DispatchGroupWrapper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // ivar: _dispatchGroup


-(id)init;
-(void)executeWithDispatchGroup:(id)arg0 ;
-(void)notify:(id)arg0 ;


@end


#endif