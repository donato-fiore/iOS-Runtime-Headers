// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNLOCALIZEDSTRING_H
#define UNLOCALIZEDSTRING_H

@class NSString, NSArray;



@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg0 arguments:(id)arg1 value:(id)arg2 ;
-(BOOL)_allowsDirectEncoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(NSUInteger)hash;
-(NSUInteger)length;
-(id)_initWithKey:(id)arg0 arguments:(id)arg1 value:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)un_localizedStringArguments;
-(id)un_localizedStringKey;
-(id)un_localizedStringValue;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif