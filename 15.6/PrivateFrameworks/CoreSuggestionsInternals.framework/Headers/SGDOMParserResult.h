// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDOMPARSERRESULT_H
#define SGDOMPARSERRESULT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGDOMParserResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *plainText; // ivar: _plainText
@property (readonly, nonatomic) NSArray *taggedCharacterRanges; // ivar: _taggedCharacterRanges


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDOMParserResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlainText:(id)arg0 taggedCharacterRanges:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertSubject:(id)arg0 ;


@end


#endif