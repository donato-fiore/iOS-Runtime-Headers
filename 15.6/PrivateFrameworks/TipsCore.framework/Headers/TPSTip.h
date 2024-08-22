// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSTIP_H
#define TPSTIP_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;


#import "TPSDocument.h"
#import "TPSFullTipContent.h"
#import "TPSAssets.h"
#import "TPSActionableContent.h"
#import "TPSWidgetContent.h"

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *collectionIdentifiers; // ivar: _collectionIdentifiers
@property (copy, nonatomic) NSString *eyebrow; // ivar: _eyebrow
@property (copy, nonatomic) TPSFullTipContent *fullContent; // ivar: _fullContent
@property (readonly, copy, nonatomic) TPSAssets *fullContentAssets;
@property (readonly, nonatomic, getter=isHardwareWelcome) BOOL hardwareWelcome;
@property (readonly, nonatomic, getter=isIntro) BOOL intro;
@property (copy, nonatomic) TPSActionableContent *miniContent; // ivar: _miniContent
@property (readonly, nonatomic, getter=isOutro) BOOL outro;
@property (nonatomic, getter=isSiriSuggestion) BOOL siriSuggestion; // ivar: _siriSuggestion
@property (readonly, nonatomic, getter=isSoftwareWelcome) BOOL softwareWelcome;
@property (nonatomic) NSInteger subContentType; // ivar: _subContentType
@property (readonly, nonatomic, getter=isTip) BOOL tip;
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic, getter=isWelcome) BOOL welcome;
@property (copy, nonatomic) TPSWidgetContent *widgetContent; // ivar: _widgetContent


+(BOOL)supportsSecureCoding;
+(NSInteger)contentTypeForDictionary:(id)arg0 ;
+(id)URLSchemeWithTipIdentifier:(id)arg0 collectionIdentifier:(id)arg1 referrer:(id)arg2 ;
+(id)tipIdFromDictionary:(id)arg0 ;
+(void)getValuesFromOpenURLSchemeQueryItems:(id)arg0 tipIdentifier:(*id)arg1 collectionIdentifier:(*id)arg2 referrer:(*id)arg3 ;
-(BOOL)containsLinks;
-(BOOL)hasImage;
-(BOOL)hasVideo;
-(BOOL)hasWidgetContent;
-(BOOL)textContainsHTML;
-(id)URLSchemeWithReferrer:(id)arg0 ;
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
-(void)updateWithContentDictionary:(id)arg0 metadata:(id)arg1 ;


@end


#endif