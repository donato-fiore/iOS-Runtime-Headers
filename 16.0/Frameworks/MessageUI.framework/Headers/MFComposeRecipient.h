// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCOMPOSERECIPIENT_H
#define MFCOMPOSERECIPIENT_H

@class NSString, NSArray, CNAutocompleteResult, CNContact;
@protocol NSItemProviderReading, NSItemProviderWriting, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MFComposeRecipientOriginContext.h"

@interface MFComposeRecipient : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSSecureCoding>

 {
    *void _record;
    int _recordID;
    int _property;
    int _identifier;
    NSString *_address;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    NSString *_compositeName;
}


@property (copy, nonatomic) NSString *address;
@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult; // ivar: _autocompleteResult
@property (readonly, nonatomic) NSString *commentedAddress;
@property (readonly, nonatomic) NSString *compositeName;
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDirectoryServerResult;
@property (readonly, nonatomic) BOOL isGroup;
@property (readonly, nonatomic) BOOL isSuggestedRecipient;
@property (readonly, nonatomic) NSUInteger kind; // ivar: _kind
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *normalizedAddress;
@property (retain, nonatomic) MFComposeRecipientOriginContext *originContext; // ivar: _originContext
@property (readonly, nonatomic) NSString *placeholderName;
@property (readonly, nonatomic, getter=isRemovableFromSearchResults) BOOL removableFromSearchResults;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) BOOL showsAccessoryButton;
@property (nonatomic) NSUInteger sourceType; // ivar: _sourceType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uncommentedAddress;
@property (copy, nonatomic) NSString *unlocalizedLabel; // ivar: _unlocalizedLabel
@property (copy, nonatomic) NSString *valueIdentifier; // ivar: _valueIdentifier
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)supportsSecureCoding;
+(id)_requiredKeyDescriptors;
+(id)composeRecipientWithAutocompleteResult:(id)arg0 ;
+(id)mf_recipientWithGALResult:(id)arg0 ;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)recipientWithProperty:(int)arg0 address:(id)arg1 ;
+(id)recipientWithRecord:(*void)arg0 property:(int)arg1 identifier:(int)arg2 ;
+(id)recipientWithRecord:(*void)arg0 recordID:(int)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(*void)record;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wasCompleteMatch;
-(id)_unformattedAddress;
-(id)children;
-(id)childrenWithCompleteMatches;
-(id)completelyMatchedAttributedStrings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 address:(id)arg1 kind:(NSUInteger)arg2 ;
-(id)initWithRecord:(*void)arg0 recordID:(int)arg1 property:(int)arg2 identifier:(int)arg3 address:(id)arg4 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)preferredSendingAddress;
-(id)sortedChildren;
-(int)identifier;
-(int)property;
-(int)recordID;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setIdentifier:(int)arg0 ;
-(void)setRecord:(*void)arg0 recordID:(int)arg1 identifier:(int)arg2 ;


@end


#endif