// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPTRANSLATORRESPONSE_H
#define AXPTRANSLATORRESPONSE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXPTranslationObject.h"

@interface AXPTranslatorResponse : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) AXPTranslationObject *associatedNotificationObject; // ivar: _associatedNotificationObject
@property (nonatomic) NSUInteger attribute; // ivar: _attribute
@property (readonly, nonatomic) BOOL boolResponse;
@property (nonatomic) NSUInteger error; // ivar: _error
@property (nonatomic) NSUInteger notification; // ivar: _notification
@property (retain, nonatomic) NSObject<NSObject><NSCopying><NSSecureCoding> *resultData; // ivar: _resultData
@property (readonly, nonatomic) AXPTranslationObject *translationResponse;
@property (readonly, nonatomic) NSArray *translationsResponse;


+(BOOL)supportsSecureCoding;
+(id)allowedDecodableClasses;
+(id)emptyResponse;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif