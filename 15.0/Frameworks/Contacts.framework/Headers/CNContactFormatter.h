// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTFORMATTER_H
#define CNCONTACTFORMATTER_H

@class NSFormatter, NSPersonNameComponentsFormatter;
@protocol NSSecureCoding;



@interface CNContactFormatter : NSFormatter <NSSecureCoding>

 {
    NSPersonNameComponentsFormatter *_nameFormatter;
}


@property (nonatomic) BOOL emphasizesPrimaryNameComponent; // ivar: _emphasizesPrimaryNameComponent
@property (nonatomic) NSUInteger fallbackStyle; // ivar: _fallbackStyle
@property (nonatomic) BOOL ignoresNickname; // ivar: _ignoresNickname
@property (nonatomic) BOOL ignoresOrganization; // ivar: _ignoresOrganization
@property (nonatomic) NSInteger sortOrder; // ivar: _sortOrder
@property (nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
+(NSInteger)nameOrderForContact:(id)arg0 ;
+(id)abbreviatedStringFromContact:(id)arg0 trimmingWhitespace:(BOOL)arg1 ;
+(id)attributedStringFromContact:(id)arg0 style:(NSInteger)arg1 defaultAttributes:(id)arg2 ;
+(id)delimiterForContact:(id)arg0 ;
+(id)descriptorForRequiredKeysForDelimiter;
+(id)descriptorForRequiredKeysForNameOrder;
+(id)descriptorForRequiredKeysForStyle:(NSInteger)arg0 ;
+(id)stringFromContact:(id)arg0 style:(NSInteger)arg1 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)attributedStringFromContact:(id)arg0 defaultAttributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptorForRequiredKeys;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromContact:(id)arg0 ;
-(id)stringFromContact:(id)arg0 attributes:(id)arg1 ;
-(id)stringFromPotentiallySuggestedContact:(id)arg0 relatedToProperty:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif