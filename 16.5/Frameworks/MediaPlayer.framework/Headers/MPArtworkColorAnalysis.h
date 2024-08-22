// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPARTWORKCOLORANALYSIS_H
#define MPARTWORKCOLORANALYSIS_H

@class UIColor;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight; // ivar: _backgroundColorLight
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight; // ivar: _primaryTextColorLight
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight; // ivar: _secondaryTextColorLight


+(BOOL)supportsSecureCoding;
+(id)translateFromMSVColorAnalysis:(id)arg0 ;
-(id)_copyWithClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif