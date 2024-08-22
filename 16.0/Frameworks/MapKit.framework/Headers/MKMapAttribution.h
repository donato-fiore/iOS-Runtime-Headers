// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMAPATTRIBUTION_H
#define MKMAPATTRIBUTION_H

@class UIImage, NSString, NSAttributedString, NSURL;

#import <Foundation/Foundation.h>


@interface MKMapAttribution : NSObject

@property (readonly, nonatomic) UIImage *providerImage; // ivar: _providerImage
@property (readonly, nonatomic) NSString *providerName; // ivar: _providerName
@property (readonly, nonatomic) NSString *providerString; // ivar: _providerString
@property (readonly, nonatomic) NSAttributedString *string; // ivar: _string
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)attributionUrlFromRegionalAttributions:(id)arg0 ;
-(id)attributedStringWithImage:(id)arg0 ;
-(id)disclosureArrow;
-(id)initWithStringAttributes:(id)arg0 regionalAttributions:(id)arg1 underlineText:(BOOL)arg2 applyLinkAttribution:(BOOL)arg3 scale:(CGFloat)arg4 ;


@end


#endif