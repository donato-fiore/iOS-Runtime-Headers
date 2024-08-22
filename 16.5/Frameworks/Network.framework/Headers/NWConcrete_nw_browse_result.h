// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_BROWSE_RESULT_H
#define NWCONCRETE_NW_BROWSE_RESULT_H

@class NSString;
@protocol OS_nw_browse_result, OS_nw_endpoint, OS_nw_array, OS_nw_txt_record;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_browse_result : NSObject <OS_nw_browse_result>

 {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_array> *interfaces;
    NSObject<OS_nw_txt_record> *txt_record;
    char * description;
    char * logging_description;
    os_unfair_lock_s lock;
    BOOL immutable;
    BOOL discovered_from_path;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif