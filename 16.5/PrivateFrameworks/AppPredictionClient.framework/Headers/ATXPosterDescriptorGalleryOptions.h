// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOSTERDESCRIPTORGALLERYOPTIONS_H
#define ATXPOSTERDESCRIPTORGALLERYOPTIONS_H

@class NSString, NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXComplication.h"

@interface ATXPosterDescriptorGalleryOptions : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowsSystemSuggestedComplications; // ivar: _allowsSystemSuggestedComplications
@property (copy, nonatomic) NSString *descriptiveTextLocalizationKey; // ivar: _descriptiveTextLocalizationKey
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *displayNameLocalizationKey; // ivar: _displayNameLocalizationKey
@property (nonatomic) NSInteger featuredConfidenceLevel; // ivar: _featuredConfidenceLevel
@property (nonatomic) NSInteger focus; // ivar: _focus
@property (nonatomic, getter=isHero) BOOL hero; // ivar: _hero
@property (copy, nonatomic) ATXComplication *inlineComplication; // ivar: _inlineComplication
@property (copy, nonatomic) NSArray *modularComplications; // ivar: _modularComplications
@property (nonatomic, getter=isOnlyEligibleForMadeForFocusSection) BOOL onlyEligibleForMadeForFocusSection; // ivar: _onlyEligibleForMadeForFocusSection
@property (nonatomic) NSInteger photoSubtype; // ivar: _photoSubtype
@property (nonatomic) BOOL shouldShowAsShuffleStack; // ivar: _shouldShowAsShuffleStack
@property (copy, nonatomic) NSString *spokenNameLocalizationKey; // ivar: _spokenNameLocalizationKey


+(BOOL)supportsSecureCoding;
+(id)galleryOptionsFromDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)isBlankTemplate;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPosterDescriptorGalleryOptions:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)preferredComplications;
-(id)preferredInlineComplication;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBlankTemplate:(BOOL)arg0 ;
-(void)setPreferredComplications:(id)arg0 ;
-(void)setPreferredInlineComplication:(id)arg0 ;


@end


#endif