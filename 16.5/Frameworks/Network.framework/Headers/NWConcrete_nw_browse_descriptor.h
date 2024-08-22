// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_BROWSE_DESCRIPTOR_H
#define NWCONCRETE_NW_BROWSE_DESCRIPTOR_H

@class NSString;
@protocol OS_nw_browse_descriptor, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor>

 {
    int type;
    char * bonjour_type;
    char * bonjour_domain;
    char * description;
    char * logging_description;
    NSObject<OS_dispatch_data> *custom_data;
    id *browse_block;
    char * application_service_name;
    char * bundle_id;
    unsigned int device_types;
    BOOL include_txt_record;
    BOOL sign_results;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)redactedDescription;
-(void)dealloc;


@end


#endif