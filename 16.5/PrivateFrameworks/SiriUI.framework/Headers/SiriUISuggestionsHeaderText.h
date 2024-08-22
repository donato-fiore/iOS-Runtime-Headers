// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUISUGGESTIONSHEADERTEXT_H
#define SIRIUISUGGESTIONSHEADERTEXT_H

@class NSAttributedString, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriUISuggestionsHeaderText : NSObject <NSCopying>



@property (readonly, nonatomic) NSAttributedString *attributedStringForMainScreenTraitCollection;
@property (copy, nonatomic) NSString *compactString; // ivar: _compactString
@property (copy, nonatomic) NSString *regularString; // ivar: _regularString
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(BOOL)isEqual:(id)arg0 ;
-(id)_attributedStringWithString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRegularString:(id)arg0 compactString:(id)arg1 ;


@end


#endif