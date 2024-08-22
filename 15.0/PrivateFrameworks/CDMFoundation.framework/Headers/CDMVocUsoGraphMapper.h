// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMVOCUSOGRAPHMAPPER_H
#define CDMVOCUSOGRAPHMAPPER_H


#import <Foundation/Foundation.h>


@interface CDMVocUsoGraphMapper : NSObject



+(id)buildAppNameUSOGraphWithIdentifier:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildAttachmentTypeUSOGraph:(id)arg0 withSemantic:(id)arg1 withStartCharIndex:(unsigned int)arg2 withEndCharIndex:(unsigned int)arg3 ;
+(id)buildContactTypeUSOGraphWithIdentifier:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildDecimalRegexUSOGraphWithIdentifier:(id)arg0 withInput:(id)arg1 withStartCharIndex:(unsigned int)arg2 withEndCharIndex:(unsigned int)arg3 ;
+(id)buildDeviceCategoryUSOGraphWithIdentifier:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildEmailAddressRegexUSOGraphWithIdentifier:(id)arg0 withInput:(id)arg1 withStartCharIndex:(unsigned int)arg2 withEndCharIndex:(unsigned int)arg3 ;
+(id)buildEmailContactUSOGraphWithIdentifier:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildEmergencyPhoneNumberUSOGraphWithIdentifier:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildEmgerencyPhoneAgentUSOGraphWithIdentifier:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildFractionNumberUSOGraphWithIdentifier:(id)arg0 withFractionSemantic:(id)arg1 withStartCharIndex:(unsigned int)arg2 withEndCharIndex:(unsigned int)arg3 ;
+(id)buildIntegerRegexUSOGraphWithIdentifier:(id)arg0 withInput:(id)arg1 withStartCharIndex:(unsigned int)arg2 withEndCharIndex:(unsigned int)arg3 ;
+(id)buildNumberPowerOfTenUSOGraph:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildPersonRelationshipUSOGraphWithIdentifier:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildPhoneContactUSOGraphWithIdentifier:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildPhoneNumberRegexUSOGraphWithIdentifier:(id)arg0 withInput:(id)arg1 withStartCharIndex:(unsigned int)arg2 withEndCharIndex:(unsigned int)arg3 ;
+(id)buildSettingUSOGraphWithIdentifier:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildSmsAttributesUSOGraph:(id)arg0 withFractionSemantic:(id)arg1 withStartCharIndex:(unsigned int)arg2 withEndCharIndex:(unsigned int)arg3 ;
+(id)buildVocUSOGraphForHandsFreeListPosition:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildVocUSOGraphForRegexOrdinal:(unsigned int)arg0 withVocLabel:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(id)buildVocUSOGraphWithVocLabel:(id)arg0 withSemantic:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4 ;
+(struct unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>> )buildIdentifierWithSemantic:(id)arg0 withVocLabel:(id)arg1 ;


@end


#endif