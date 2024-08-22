// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFMEDIAITEM_H
#define SFMEDIAITEM_H

@class NSArray, NSString, NSDictionary, NSData;
@protocol SFMediaItem, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFImage.h"
#import "SFPunchout.h"
#import "SFText.h"

@interface SFMediaItem : NSObject <SFMediaItem, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *buyOptions; // ivar: _buyOptions
@property (copy, nonatomic) NSString *contentAdvisory; // ivar: _contentAdvisory
@property (retain, nonatomic) SFImage *contentAdvisoryImage; // ivar: _contentAdvisoryImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFImage *overlayImage; // ivar: _overlayImage
@property (retain, nonatomic) SFPunchout *punchout; // ivar: _punchout
@property (retain, nonatomic) SFImage *reviewGlyph; // ivar: _reviewGlyph
@property (copy, nonatomic) NSString *reviewText; // ivar: _reviewText
@property (copy, nonatomic) NSArray *subtitleCustomLineBreaking; // ivar: _subtitleCustomLineBreaking
@property (retain, nonatomic) SFText *subtitleText; // ivar: _subtitleText
@property (readonly) Class superclass;
@property (retain, nonatomic) SFImage *thumbnail; // ivar: _thumbnail
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif