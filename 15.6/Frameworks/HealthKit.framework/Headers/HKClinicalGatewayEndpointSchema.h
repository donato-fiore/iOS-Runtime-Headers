// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCLINICALGATEWAYENDPOINTSCHEMA_H
#define HKCLINICALGATEWAYENDPOINTSCHEMA_H

@class NSString, NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalGatewayEndpointSchema : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSString *auth; // ivar: _auth
@property (readonly, copy, nonatomic) NSDictionary *body; // ivar: _body
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSArray *form; // ivar: _form
@property (readonly, copy, nonatomic) NSArray *headers; // ivar: _headers
@property (readonly, copy, nonatomic) NSString *method; // ivar: _method
@property (readonly, nonatomic) NSInteger minCompatibleAPIVersion; // ivar: _minCompatibleAPIVersion
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSArray *query; // ivar: _query


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAuth:(id)arg0 body:(id)arg1 enabled:(BOOL)arg2 form:(id)arg3 headers:(id)arg4 method:(id)arg5 minCompatibleAPIVersion:(NSInteger)arg6 name:(id)arg7 query:(id)arg8 URL:(id)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif