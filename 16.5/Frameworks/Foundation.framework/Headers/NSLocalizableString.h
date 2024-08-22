// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSLOCALIZABLESTRING_H
#define NSLOCALIZABLESTRING_H



#import "NSString.h"

@interface NSLocalizableString : NSString {
    NSString *_stringsFileKey;
    NSString *_developmentLanguageString;
}


@property (readonly, copy) NSString *developmentLanguageString;
@property (readonly, copy) NSString *stringsFileKey;


+(BOOL)supportsSecureCoding;
+(id)localizableStringWithStringsFileKey:(id)arg0 developmentLanguageString:(id)arg1 ;
-(Class)classForCoder;
-(NSUInteger)length;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStringsFileKey:(id)arg0 developmentLanguageString:(id)arg1 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif