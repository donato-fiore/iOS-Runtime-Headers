// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPTRANSLATORREQUEST_H
#define AXPTRANSLATORREQUEST_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXPTranslationObject.h"

@interface AXPTranslatorRequest : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger actionType; // ivar: _actionType
@property (nonatomic) NSUInteger attributeType; // ivar: _attributeType
@property (nonatomic) NSUInteger clientType; // ivar: _clientType
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (retain, nonatomic) AXPTranslationObject *translation; // ivar: _translation


+(BOOL)supportsSecureCoding;
+(id)allowedDecodableClasses;
+(id)requestWithTranslation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif