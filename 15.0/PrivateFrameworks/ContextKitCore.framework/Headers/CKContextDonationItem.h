// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONTEXTDONATIONITEM_H
#define CKCONTEXTDONATIONITEM_H

@class NSString, IOSurface, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKContextDonationItem : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic, setter=setContentAuthor:) NSString *contentAuthor; // ivar: _contentAuthor
@property (retain, nonatomic, setter=setContentDescription:) NSString *contentDescription; // ivar: _contentDescription
@property (retain, nonatomic, setter=setContentKeywords:) NSString *contentKeywords; // ivar: _contentKeywords
@property (retain, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) NSString *debugUrlString; // ivar: _debugUrlString
@property (retain, nonatomic) NSString *languageTag; // ivar: _languageTag
@property (retain, nonatomic, setter=setLeadImage:) IOSurface *leadImage; // ivar: _leadImage
@property (retain, nonatomic, setter=setSnapshot:) IOSurface *snapshot; // ivar: _snapshot
@property (retain, nonatomic, setter=setText:) NSString *text; // ivar: _text
@property (retain, nonatomic, setter=setTitle:) NSString *title; // ivar: _title
@property (retain, nonatomic) NSArray *uiElements; // ivar: _uiElements


+(BOOL)supportsSecureCoding;
+(id)trimTextToSize:(id)arg0 ;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif