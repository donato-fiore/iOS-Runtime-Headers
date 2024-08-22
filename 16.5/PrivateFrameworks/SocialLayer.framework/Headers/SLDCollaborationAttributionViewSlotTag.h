// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDCOLLABORATIONATTRIBUTIONVIEWSLOTTAG_H
#define SLDCOLLABORATIONATTRIBUTIONVIEWSLOTTAG_H

@class NSArray, NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "SLDSlotTag.h"
#import "SLDImageSymbolConfiguration.h"

@interface SLDCollaborationAttributionViewSlotTag : SLDSlotTag <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *collaboratorDisplayNames; // ivar: _collaboratorDisplayNames
@property (retain, nonatomic) NSArray *conversationDrawingMetadata; // ivar: _conversationDrawingMetadata
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) SLDImageSymbolConfiguration *placeholderGlyphConfiguration; // ivar: _placeholderGlyphConfiguration
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger variant; // ivar: _variant
@property (retain, nonatomic) NSNumber *widthNumber; // ivar: _widthNumber


+(BOOL)supportsSecureCoding;
+(id)_personOtherThanPerson:(id)arg0 inArray:(id)arg1 ;
+(id)conversationDrawingMetadataForAttributions:(id)arg0 ;
+(id)displayNamesForPersons:(id)arg0 ;
+(id)placeholderTagForMaxWidth:(CGFloat)arg0 placeholderGlyphConfiguration:(id)arg1 ;
+(id)recipientsForAttribution:(id)arg0 ;
+(id)tagForTitle:(id)arg0 attributions:(id)arg1 placeholderGlyphConfiguration:(id)arg2 maxWidth:(CGFloat)arg3 variant:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 attributions:(id)arg1 placeholderGlyphConfiguration:(id)arg2 maxWidth:(CGFloat)arg3 variant:(NSInteger)arg4 isPlaceholder:(BOOL)arg5 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif