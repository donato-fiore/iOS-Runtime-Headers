// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRLANGUAGEOPTION_H
#define MRLANGUAGEOPTION_H

@class NSArray, NSData, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_MRLanguageOptionProtobuf.h"

@interface MRLanguageOption : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *characteristics; // ivar: _characteristics
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hasType; // ivar: _hasType
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *languageTag; // ivar: _languageTag
@property (readonly, nonatomic) _MRLanguageOptionProtobuf *protobuf;
@property (nonatomic) unsigned int type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)automaticLanguageOptionWithType:(unsigned int)arg0 ;
-(BOOL)isAutomaticLanguageOptionWithType:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithType:(unsigned int)arg0 languageTag:(id)arg1 characteristics:(id)arg2 displayName:(id)arg3 identifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif