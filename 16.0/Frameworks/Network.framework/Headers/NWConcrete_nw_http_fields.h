// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_HTTP_FIELDS_H
#define NWCONCRETE_NW_HTTP_FIELDS_H

@protocol OS_nw_http_fields, OS_nw_array;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_http_fields : NSObject <OS_nw_http_fields>

 {
    NSObject<OS_nw_array> *fields;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif