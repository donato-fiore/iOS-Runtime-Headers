// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSATTRIBUTEDSTRINGGRAMMARINFLECTION_H
#define _NSATTRIBUTEDSTRINGGRAMMARINFLECTION_H

@class NSData, NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSMorphologyCustomPronoun.h"
#import "NSString.h"

@interface _NSAttributedStringGrammarInflection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property NSInteger context; // ivar: _context
@property (copy, nonatomic) NSMorphologyCustomPronoun *englishCustomPronoun; // ivar: _englishCustomPronoun
@property (readonly) NSData *externalRepresentation;
@property (readonly) NSDictionary *externalRepresentationDictionary;
@property NSInteger gender; // ivar: _gender
@property NSInteger grammaticalCase; // ivar: _grammaticalCase
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (readonly) NSString *localizedShortDescription;
@property NSInteger number; // ivar: _number
@property NSInteger person; // ivar: _person


+(BOOL)_canSelectUserInflectionWithPreferredLanguages:(id)arg0 ;
+(BOOL)_isSimulatingLockedDevice;
+(BOOL)_isSimulatingThirdPartyProcess;
+(BOOL)_thirdPartyApplicationsCanAccessUserInflection;
+(BOOL)canSelectCustomInflection;
+(BOOL)canSelectUserInflection;
+(BOOL)supportsSecureCoding;
+(id)_currentGlobalUserInflection;
+(id)_currentGlobalUserInflectionIfAvailable;
+(id)_protectedPreferencesDomain;
+(id)_thirdPartyPreferencesDomain;
+(id)presetInflections;
+(id)userInflection;
+(void)_addGlobalUserInflectionObserver:(id)arg0 options:(NSUInteger)arg1 context:(*void)arg2 ;
+(void)_removeGlobalUserInflectionObserver:(id)arg0 context:(*void)arg1 ;
+(void)_setThirdPartyApplicationsCanAccessUserInflection:(BOOL)arg0 ;
+(void)_usePreferencesDomainForFirstParty:(id)arg0 thirdParty:(id)arg1 simulateLockedDevice:(BOOL)arg2 simulateThirdPartyProcess:(BOOL)arg3 withinBlock:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithGender:(NSInteger)arg0 ;
-(id)_initWithMarkdownDictionary:(id)arg0 ;
-(id)_markupDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithExternalRepresentationDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithInflectionRule:(id)arg0 ;
-(id)initWithMorphology:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_beginUsingInsteadOfUserInflection;
-(void)_editByAddingWordAttributes:(struct ? )arg0 overrideIfAlreadySet:(BOOL)arg1 ;
-(void)_editByApplyingPluralityRulesForNumbers:(id)arg0 inLanguages:(id)arg1 ;
-(void)_endUsingInsteadOfUserInflection;
-(void)_setAsGlobalUserInflection;
-(void)_useInsteadOfUserInflectionInBlock:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif