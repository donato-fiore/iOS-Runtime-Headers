// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFACEGALLERYITEM_H
#define ATXFACEGALLERYITEM_H

@class NSArray, NSString, NSDictionary, NSNumber, BSColor;
@protocol BMStoreData, ATXProtoBufWrapper, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXComplication.h"

@interface ATXFaceGalleryItem : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding, NSCopying>



@property (nonatomic, getter=isBlankTemplate) BOOL blankTemplate; // ivar: _blankTemplate
@property (copy, nonatomic) NSArray *complications; // ivar: _complications
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptiveTextLocalizationKey; // ivar: _descriptiveTextLocalizationKey
@property (copy, nonatomic) NSString *descriptorIdentifier; // ivar: _descriptorIdentifier
@property (copy, nonatomic) NSString *displayNameLocalizationKey; // ivar: _displayNameLocalizationKey
@property (copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isPreferredForGallery; // ivar: _isPreferredForGallery
@property (readonly, copy, nonatomic) NSDictionary *jsonDictionary;
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (retain, nonatomic) NSNumber *modeSemanticType; // ivar: _modeSemanticType
@property (copy, nonatomic) NSString *modeUUID; // ivar: _modeUUID
@property (retain, nonatomic) NSNumber *score; // ivar: _score
@property (nonatomic) BOOL shouldShowAsShuffleStack; // ivar: _shouldShowAsShuffleStack
@property (nonatomic) NSInteger source; // ivar: _source
@property (copy, nonatomic) NSString *spokenNameLocalizationKey; // ivar: _spokenNameLocalizationKey
@property (copy, nonatomic) ATXComplication *subtitleComplication; // ivar: _subtitleComplication
@property (readonly) Class superclass;
@property (copy, nonatomic) BSColor *titleColor; // ivar: _titleColor
@property (copy, nonatomic) NSString *titleFontName; // ivar: _titleFontName


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)itemFromJSONDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXFaceGalleryItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 descriptorIdentifier:(id)arg1 extensionBundleIdentifier:(id)arg2 localizedDisplayName:(id)arg3 modeSemanticType:(id)arg4 titleFontName:(id)arg5 titleColor:(id)arg6 subtitleComplication:(id)arg7 layoutType:(NSInteger)arg8 complications:(id)arg9 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif