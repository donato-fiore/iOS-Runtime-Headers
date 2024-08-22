// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSTOKENSCOPE_H
#define _CSTOKENSCOPE_H

@class NSMutableSet, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _CSTokenScope : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableSet *queryTemplates; // ivar: _queryTemplates
@property (nonatomic) NSInteger scopeType; // ivar: _scopeType
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *tokenTitle; // ivar: _tokenTitle


+(BOOL)supportsSecureCoding;
+(id)scopesFromCSTokenScopes:(id)arg0 displayString:(id)arg1 handles:(id)arg2 ;
+(id)tokenScopesForAllTokens;
+(id)tokenScopesForAttachmentNameContains;
+(id)tokenScopesForAttachmentType;
+(id)tokenScopesForMessageWithAttachments;
+(id)tokenScopesForPerson;
+(id)tokenScopesForSubjectContains;
+(id)tokenScopesWithTitles:(id)arg0 tokenTitles:(id)arg1 scopeTypes:(id)arg2 queryAttributesList:(id)arg3 ;
+(id)tokenScopesWithTitles:(id)arg0 tokenTitles:(id)arg1 scopeTypes:(id)arg2 queryAttributesList:(id)arg3 modifiers:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTokenScope:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 tokenTitle:(id)arg1 scopeType:(NSInteger)arg2 ;
-(id)queryForHandles:(id)arg0 ;
-(void)addQueryAttributes:(id)arg0 ;
-(void)addQueryAttributes:(id)arg0 modifier:(id)arg1 ;
-(void)addQueryTemplate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif