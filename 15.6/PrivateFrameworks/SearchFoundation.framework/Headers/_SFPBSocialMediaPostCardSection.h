// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBSOCIALMEDIAPOSTCARDSECTION_H
#define _SFPBSOCIALMEDIAPOSTCARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBSocialMediaPostCardSection, NSSecureCoding;


#import "_SFPBColor.h"
#import "_SFPBImage.h"
#import "_SFPBRichText.h"

@interface _SFPBSocialMediaPostCardSection : PBCodable <_SFPBSocialMediaPostCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int nameMaxLines; // ivar: _nameMaxLines
@property (nonatomic) BOOL nameNoWrap; // ivar: _nameNoWrap
@property (retain, nonatomic) _SFPBImage *picture; // ivar: _picture
@property (retain, nonatomic) _SFPBRichText *post; // ivar: _post
@property (retain, nonatomic) _SFPBImage *profilePicture; // ivar: _profilePicture
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) _SFPBImage *verifiedGlyph; // ivar: _verifiedGlyph


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearPunchoutOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif