// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSINLINETEXTPARAMETERS_H
#define CHSINLINETEXTPARAMETERS_H

@class NSString, BSColor;
@protocol BSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CHSFontSpecification.h"

@interface CHSInlineTextParameters : NSObject <BSXPCSecureCoding, NSCopying>



@property (nonatomic) BOOL allowsNonSystemForegroundColors; // ivar: _allowsNonSystemForegroundColors
@property (copy, nonatomic) NSString *dateFormat; // ivar: _dateFormat
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CHSFontSpecification *fontSpecification; // ivar: _fontSpecification
@property (nonatomic) BOOL forceUppercase; // ivar: _forceUppercase
@property (copy, nonatomic) BSColor *foregroundColor; // ivar: _foregroundColor
@property (nonatomic) NSUInteger graphicAlignment; // ivar: _graphicAlignment
@property (nonatomic) CGSize graphicMaxSize; // ivar: _graphicMaxSize
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger horizontalAlignment; // ivar: _horizontalAlignment
@property (nonatomic) BOOL ignoresRTL; // ivar: _ignoresRTL
@property (nonatomic) BOOL showsDateAlongsideText; // ivar: _showsDateAlongsideText
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger symbolScale; // ivar: _symbolScale


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_effectiveDateFormat;
-(id)_initWithInlineTextProperties:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif