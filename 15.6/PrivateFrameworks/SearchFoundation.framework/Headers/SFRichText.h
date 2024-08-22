// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFRICHTEXT_H
#define SFRICHTEXT_H

@class NSString, NSDictionary, NSArray, NSData;
@protocol SFRichText, NSSecureCoding, NSCopying;


#import "SFText.h"

@interface SFRichText : SFText <SFRichText, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *contentAdvisory; // ivar: _contentAdvisory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *formattedTextPieces; // ivar: _formattedTextPieces
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *icons; // ivar: _icons
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger maxLines;
@property (nonatomic) CGFloat starRating; // ivar: _starRating
@property (readonly) Class superclass;
@property (copy) NSString *text;


+(BOOL)supportsSecureCoding;
-(BOOL)hasStarRating;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadRichTextWithCompletionHandler:(id)arg0 ;


@end


#endif