// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFNAMEDPROTOBUFMESSAGE_H
#define SFNAMEDPROTOBUFMESSAGE_H

@class NSString, NSDictionary, NSData;
@protocol SFNamedProtobufMessage, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFNamedProtobufMessage : NSObject <SFNamedProtobufMessage, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *protobufMessageData; // ivar: _protobufMessageData
@property (copy, nonatomic) NSString *protobufMessageName; // ivar: _protobufMessageName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif