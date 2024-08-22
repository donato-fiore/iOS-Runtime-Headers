// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_HTTP_REQUEST_H
#define NWCONCRETE_NW_HTTP_REQUEST_H

@protocol OS_nw_http_request;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_http_field.h"
#import "NWConcrete_nw_http_fields.h"

@interface NWConcrete_nw_http_request : NSObject <OS_nw_http_request>

 {
    NWConcrete_nw_http_field *method;
    NWConcrete_nw_http_field *scheme;
    NWConcrete_nw_http_field *authority;
    NWConcrete_nw_http_field *path;
    NWConcrete_nw_http_fields *fields;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif