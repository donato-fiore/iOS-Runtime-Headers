// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2EAPPROTOCOL_H
#define NEIKEV2EAPPROTOCOL_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2EAPProtocol : NSObject <NSCopying>



@property (readonly) BOOL isCertificate;
@property (readonly) BOOL isUserNamePassword;
@property NSUInteger method; // ivar: _method
@property (retain) NSDictionary *properties; // ivar: _properties
@property (readonly) unsigned int type;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMethod:(NSUInteger)arg0 ;


@end


#endif