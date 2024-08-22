// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRVOCABULARYCATEGORY_H
#define CESRVOCABULARYCATEGORY_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CESRVocabularyCategory : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *tagName; // ivar: _tagName
@property (readonly, copy, nonatomic) NSString *templateName; // ivar: _templateName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplateName:(id)arg0 tagName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif