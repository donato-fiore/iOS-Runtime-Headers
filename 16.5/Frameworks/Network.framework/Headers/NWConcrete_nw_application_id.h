// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_APPLICATION_ID_H
#define NWCONCRETE_NW_APPLICATION_ID_H

@class NSString;
@protocol OS_nw_application_id;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_application_id : NSObject <OS_nw_application_id>

 {
    os_unfair_lock_s lock;
    unsigned char uuid;
    char * originating_process;
    char * bundle_id;
    ? audit_token;
    int pid;
    int system_service;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif