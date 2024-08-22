// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_TXT_RECORD_H
#define NWCONCRETE_NW_TXT_RECORD_H

@class NSString;
@protocol OS_nw_txt_record;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_txt_record : NSObject <OS_nw_txt_record>

 {
    char * buffer;
    NSUInteger data_len;
    NSUInteger max_data_len;
    os_unfair_lock_s lock;
    BOOL is_dictionary;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif