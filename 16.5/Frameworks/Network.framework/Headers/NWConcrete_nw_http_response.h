// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_HTTP_RESPONSE_H
#define NWCONCRETE_NW_HTTP_RESPONSE_H

@protocol OS_nw_http_response;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_http_field.h"
#import "NWConcrete_nw_http_fields.h"

@interface NWConcrete_nw_http_response : NSObject <OS_nw_http_response>

 {
    NWConcrete_nw_http_field *status_field;
    char * reason_phrase;
    NWConcrete_nw_http_fields *fields;
    BOOL reason_phrase_is_const;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif