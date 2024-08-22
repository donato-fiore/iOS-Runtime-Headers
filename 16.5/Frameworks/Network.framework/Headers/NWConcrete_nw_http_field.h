// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_HTTP_FIELD_H
#define NWCONCRETE_NW_HTTP_FIELD_H

@protocol OS_nw_http_field;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_http_field : NSObject <OS_nw_http_field>

 {
    char * name;
    char * name_canonical;
    char * name_well_known;
    char * value;
    char * value_original;
    NSUInteger name_length;
    NSUInteger value_length;
    *unk value_setter;
    *unk value_deallocator;
    *void value_deallocator_context;
    int indexing_strategy;
    BOOL name_is_canonical;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif