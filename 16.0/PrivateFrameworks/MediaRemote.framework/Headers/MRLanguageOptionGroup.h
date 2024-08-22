// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRLANGUAGEOPTIONGROUP_H
#define MRLANGUAGEOPTIONGROUP_H

@class NSData, NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MRLanguageOption.h"
#import "_MRLanguageOptionGroupProtobuf.h"

@interface MRLanguageOptionGroup : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowsEmptySelection; // ivar: _allowsEmptySelection
@property (readonly, copy, nonatomic) NSData *data;
@property (retain, nonatomic) MRLanguageOption *defaultLanguageOption; // ivar: _defaultLanguageOption
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasAllowsEmptySelection; // ivar: _hasAllowsEmptySelection
@property (copy, nonatomic) NSArray *languageOptions; // ivar: _languageOptions
@property (readonly, nonatomic) _MRLanguageOptionGroupProtobuf *protobuf;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithLanguageOptions:(id)arg0 defaultLanguageOption:(id)arg1 allowsEmptySelection:(BOOL)arg2 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif