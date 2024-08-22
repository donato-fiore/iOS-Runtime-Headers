// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIDISAMBIGUATIONITEM_H
#define SIRIUIDISAMBIGUATIONITEM_H

@class NSString, UIImageView;

#import <Foundation/Foundation.h>


@interface SiriUIDisambiguationItem : NSObject

@property (copy, nonatomic) NSString *extraDisambiguationSubText; // ivar: _extraDisambiguationSubText
@property (copy, nonatomic) NSString *extraDisambiguationText; // ivar: _extraDisambiguationText
@property (copy, nonatomic) NSString *headingText; // ivar: _headingText
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL showsFavoriteStar; // ivar: _showsFavoriteStar
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) _NSRange titleBoldedRange; // ivar: _titleBoldedRange


+(id)disambiguationItem;


@end


#endif