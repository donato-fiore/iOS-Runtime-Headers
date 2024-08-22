// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSTIP_H
#define TPSTIP_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;


#import "TPSDocument.h"
#import "TPSFullTipContent.h"
#import "TPSAssets.h"
#import "TPSActionableContent.h"

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *collectionIdentifiers; // ivar: _collectionIdentifiers
@property (copy, nonatomic) NSString *eyebrow; // ivar: _eyebrow
@property (copy, nonatomic) TPSFullTipContent *fullContent; // ivar: _fullContent
@property (readonly, copy, nonatomic) TPSAssets *fullContentAssets;
@property (readonly, nonatomic, getter=isIntro) BOOL intro;
@property (copy, nonatomic) NSString *linkedDocumentId; // ivar: _linkedDocumentId
@property (copy, nonatomic) TPSActionableContent *miniContent; // ivar: _miniContent
@property (readonly, nonatomic, getter=isOutro) BOOL outro;
@property (nonatomic, getter=isSiriSuggestion) BOOL siriSuggestion; // ivar: _siriSuggestion
@property (nonatomic) NSInteger subContentType; // ivar: _subContentType
@property (readonly, nonatomic, getter=isTip) BOOL tip;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSInteger)contentTypeForContentDictionary:(id)arg0 ;
+(NSInteger)contentTypeForDictionary:(id)arg0 ;
+(id)na_identity;
+(id)tipIdFromDictionary:(id)arg0 ;
-(BOOL)containsLinks;
-(BOOL)hasImage;
-(BOOL)hasVideo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHardwareWelcome;
-(BOOL)isSoftwareWelcome;
-(BOOL)textContainsHTML;
-(NSUInteger)hash;
-(id)URLWithReferrer:(id)arg0 ;
-(id)actions;
-(id)bodyContent;
-(id)bodyText;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)footnoteContent;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 ;
-(id)shareText;
-(id)shortTitle;
-(id)summary;
-(id)title;
-(id)webURLPath;
-(void)addCollectionIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeCollectionIdentifier:(id)arg0 ;
-(void)updateWithContentDictionary:(id)arg0 metadata:(id)arg1 clientConditionIdentifier:(id)arg2 fileIdMap:(id)arg3 clientConditions:(id)arg4 ;


@end


#endif