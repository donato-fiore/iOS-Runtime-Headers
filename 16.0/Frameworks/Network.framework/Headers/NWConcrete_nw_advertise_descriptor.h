// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_ADVERTISE_DESCRIPTOR_H
#define NWCONCRETE_NW_ADVERTISE_DESCRIPTOR_H

@class NSString;
@protocol OS_nw_advertise_descriptor, OS_nw_txt_record;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_advertise_descriptor : NSObject <OS_nw_advertise_descriptor>

 {
    int descriptor_type;
    char * name;
    char * type;
    char * domain;
    NSObject<OS_nw_txt_record> *txt_record;
    char * application_service_name;
    char * bundle_id;
    BOOL no_auto_rename;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif