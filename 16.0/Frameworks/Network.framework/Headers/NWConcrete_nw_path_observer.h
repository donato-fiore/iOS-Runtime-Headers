// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PATH_OBSERVER_H
#define NWCONCRETE_NW_PATH_OBSERVER_H

@class NSString;
@protocol OS_nw_path_observer, OS_dispatch_queue, OS_nw_dictionary, OS_nw_fd_wrapper;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_path_observer : NSObject <OS_nw_path_observer>

 {
    NSObject<OS_dispatch_queue> *client_queue;
    id *update_block;
    NSObject<OS_nw_dictionary> *known_paths;
    NSObject<OS_nw_fd_wrapper> *fd;
    *void source;
    os_unfair_lock_s lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif