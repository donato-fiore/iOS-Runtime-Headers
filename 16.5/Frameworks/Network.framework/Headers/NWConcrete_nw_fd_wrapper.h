// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_FD_WRAPPER_H
#define NWCONCRETE_NW_FD_WRAPPER_H

@class NSString;
@protocol OS_nw_fd_wrapper;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_fd_wrapper : NSObject <OS_nw_fd_wrapper>

 {
    int fd;
    os_unfair_lock_s lock;
    NSUInteger guard;
    BOOL guarded;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif