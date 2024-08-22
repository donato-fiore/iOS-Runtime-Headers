// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INVOCABULARYITEM_H
#define _INVOCABULARYITEM_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _INVocabularyItem : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic, setter=_setSiriID:) NSUUID *_siriID; // ivar: __siriID
@property (readonly, nonatomic) BOOL requiresUserIdentification; // ivar: _requiresUserIdentification
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSString *vocabularyIdentifier; // ivar: _vocabularyIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)_isSimilarEnoughToNotSync:(id)arg0 ;
-(NSUInteger)validate;
-(id)_dictionaryForSaving;
-(id)_initWithUncheckedSpeakable:(id)arg0 ;
-(id)_initWithUncheckedString:(id)arg0 vocabularyIdentifier:(id)arg1 requiresUserIdentification:(BOOL)arg2 ;
-(id)_initWithVocabularyItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpeakable:(id)arg0 ;
-(id)initWithString:(id)arg0 vocabularyIdentifier:(id)arg1 ;
-(id)initWithString:(id)arg0 vocabularyIdentifier:(id)arg1 requiresUserIdentification:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif