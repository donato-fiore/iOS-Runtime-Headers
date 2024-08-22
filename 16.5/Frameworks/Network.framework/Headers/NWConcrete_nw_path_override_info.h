// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PATH_OVERRIDE_INFO_H
#define NWCONCRETE_NW_PATH_OVERRIDE_INFO_H

@class NSString;
@protocol OS_nw_path_override_info, OS_nw_array;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_path_override_info : NSObject <OS_nw_path_override_info>

 {
    NSUInteger override_flags;
    NSObject<OS_nw_array> *resolver_configs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif