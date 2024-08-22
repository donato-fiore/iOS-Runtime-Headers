// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNNAMECOMPONENTSSTRINGTOKENIZER_H
#define CNNAMECOMPONENTSSTRINGTOKENIZER_H

@class NSPersonNameComponents, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CNNameComponentsStringTokenizer : NSObject

@property (retain) NSPersonNameComponents *components; // ivar: _components
@property (copy) NSString *string; // ivar: _string
@property (retain) NSArray *tokens; // ivar: _tokens


+(BOOL)isNamePrefix:(id)arg0 ;
+(BOOL)isNameSuffix:(id)arg0 ;
+(BOOL)isNobiliaryParticle:(id)arg0 ;
+(id)componentsFromString:(id)arg0 ;
+(id)nameComponentElements;
+(id)namePrefixElements;
+(id)nameSuffixElements;
+(id)nobiliaryParticleElements;
+(id)tokensByAdjustingForNobiliaryParticles:(id)arg0 ;
+(id)tokensFromString:(id)arg0 nameOrder:(*NSInteger)arg1 ;
+(id)uncachedNameComponentElements;
+(id)whitespaceTokens:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)parseComponents;
-(void)adjustTokensForNobiliaryParticles;
-(void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(NSInteger)arg0 ;
-(void)extractNamePrefixFromBeginning;
-(void)extractNameSuffixFromEnd;
-(void)extractNicknameFromQuotedContent;
-(void)removeParentheticalContent;


@end


#endif