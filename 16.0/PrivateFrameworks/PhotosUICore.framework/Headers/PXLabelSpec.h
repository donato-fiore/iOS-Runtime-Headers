// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXLABELSPEC_H
#define PXLABELSPEC_H

@class NSDictionary, UIFont, UIColor;


#import "PXViewSpec.h"

@interface PXLabelSpec : PXViewSpec

@property (nonatomic) BOOL adjustsFontSizeToFitWidth; // ivar: _adjustsFontSizeToFitWidth
@property (nonatomic) BOOL allowTruncation; // ivar: _allowTruncation
@property (nonatomic) NSInteger capitalization; // ivar: _capitalization
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) NSInteger fallbackCapitalization; // ivar: _fallbackCapitalization
@property (copy, nonatomic) NSDictionary *fallbackTextAttributes; // ivar: _fallbackTextAttributes
@property (copy, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) CGFloat minimumScaleFactor; // ivar: _minimumScaleFactor
@property (nonatomic) CGFloat minimumTruncatedScaleFactor; // ivar: _minimumTruncatedScaleFactor
@property (nonatomic) NSUInteger numberOfLines; // ivar: _numberOfLines
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (copy, nonatomic) NSDictionary *textAttributes; // ivar: _textAttributes
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) NSInteger verticalAlignment; // ivar: _verticalAlignment


+(id)_memoriesLabelSpecForContext:(struct ? )arg0 ;
+(id)memoriesLabelSpecForLabelKind:(NSInteger)arg0 descriptor:(struct PXViewSpecDescriptor )arg1 featureSpec:(id)arg2 ;
+(id)memoriesLabelSpecForLabelKind:(NSInteger)arg0 tileKind:(NSInteger)arg1 featureSpec:(id)arg2 boundedByRect:(struct CGRect )arg3 ;
+(id)memoriesLabelSpecForLabelKind:(NSInteger)arg0 tileKind:(NSInteger)arg1 gadgetSpec:(id)arg2 boundedByRect:(struct CGRect )arg3 ;
+(id)memoriesLabelSpecForLabelKind:(NSInteger)arg0 tileKind:(NSInteger)arg1 specSet:(NSInteger)arg2 variant:(NSInteger)arg3 boundedBy:(struct CGRect )arg4 shouldScale:(BOOL)arg5 ;
+(id)px_headerSubtitleLabelSpecForZoomLevel:(NSInteger)arg0 featureSpec:(id)arg1 ;
+(id)px_headerTitleLabelSpecForZoomLevel:(NSInteger)arg0 featureSpec:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif