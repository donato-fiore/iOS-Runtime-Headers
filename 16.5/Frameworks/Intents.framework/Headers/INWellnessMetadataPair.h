// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INWELLNESSMETADATAPAIR_H
#define INWELLNESSMETADATAPAIR_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INWellnessMetadataPair : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSNumber *numberValue; // ivar: _numberValue
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNumber:(id)arg0 key:(id)arg1 ;
-(id)initWithString:(id)arg0 key:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif