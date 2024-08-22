// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHCONTEXTUALCHARACTERTRANSLITERATION_H
#define CHCONTEXTUALCHARACTERTRANSLITERATION_H

@class NSString, NSArray, NSCharacterSet;

#import <Foundation/Foundation.h>


@interface CHContextualCharacterTransliteration : NSObject

@property (readonly, copy, nonatomic) NSString *confusion; // ivar: _confusion
@property (readonly, copy, nonatomic) NSString *correction; // ivar: _correction
@property (readonly, nonatomic) NSArray *locales; // ivar: _locales
@property (readonly, nonatomic) NSCharacterSet *requiredLeftContext; // ivar: _requiredLeftContext
@property (readonly, nonatomic) NSCharacterSet *requiredRightContext; // ivar: _requiredRightContext
@property (readonly, nonatomic) BOOL requiresLexiconMatch; // ivar: _requiresLexiconMatch


-(BOOL)isValidForLocale:(id)arg0 ;
-(BOOL)meetsContextRequirementWithLeftContext:(id)arg0 rightContext:(id)arg1 ;
-(id)initWithConfusion:(id)arg0 correction:(id)arg1 locales:(id)arg2 leftContext:(id)arg3 rightContext:(id)arg4 requiresLexiconMatch:(BOOL)arg5 ;


@end


#endif