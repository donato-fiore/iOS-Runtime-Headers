// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSHIDEVENTDEFERRINGTOKEN_H
#define BKSHIDEVENTDEFERRINGTOKEN_H

@class NSString;
@protocol NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying;

#import <Foundation/Foundation.h>


@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying>

 {
    unsigned int _CAContextID;
    NSString *_stringIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)tokenForIdentifierOfCAContext:(unsigned int)arg0 ;
+(id)tokenForString:(id)arg0 ;
-(BOOL)_isIdentifierOfCAContext;
-(BOOL)_isString;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithIdentifier:(unsigned int)arg0 ;
-(id)_initWithString:(id)arg0 ;
-(id)_string;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)didFinishProtobufDecodingWithError:(*id)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)_identifierOfCAContext;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif