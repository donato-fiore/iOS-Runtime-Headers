// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOCABULARYSEARCHRESULT_H
#define CKVOCABULARYSEARCHRESULT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, CKVocabularyItem;

#import <Foundation/Foundation.h>


@interface CKVocabularySearchResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *originAppId; // ivar: _originAppId
@property (readonly, nonatomic) NSObject<CKVocabularyItem> *vocabularyItem; // ivar: _vocabularyItem


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSearchResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVocabularyItem:(id)arg0 originAppId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif