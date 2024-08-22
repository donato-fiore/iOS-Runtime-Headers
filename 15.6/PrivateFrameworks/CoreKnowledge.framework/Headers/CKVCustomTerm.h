// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVCUSTOMTERM_H
#define CKVCUSTOMTERM_H

@class NSString;
@protocol CKVocabularyItem, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKVCustomTerm : NSObject <CKVocabularyItem, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemId; // ivar: _itemId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *term; // ivar: _term
@property (readonly, nonatomic) NSString *vocabularyId; // ivar: _vocabularyId
@property (readonly, nonatomic) unsigned short vocabularyType; // ivar: _vocabularyType


+(BOOL)supportsSecureCoding;
+(id)customTermFromItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCustomTerm:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemId:(id)arg0 vocabularyType:(unsigned short)arg1 term:(id)arg2 ;
-(id)initWithItemId:(id)arg0 vocabularyType:(unsigned short)arg1 term:(id)arg2 vocabularyId:(id)arg3 ;
-(id)toItemWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif