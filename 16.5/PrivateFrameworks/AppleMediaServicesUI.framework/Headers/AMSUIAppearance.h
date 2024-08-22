// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIAPPEARANCE_H
#define AMSUIAPPEARANCE_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AMSUIAppearance : NSObject <NSCopying>



@property (retain, nonatomic) NSDictionary *_messageFontDictionary; // ivar: __messageFontDictionary
@property (retain, nonatomic) NSDictionary *_titleFontDictionary; // ivar: __titleFontDictionary


-(id)_backgroundColorWithDictionary:(id)arg0 ;
-(id)_backgroundImageWithDictionary:(id)arg0 ;
-(id)_colorWithDictionary:(id)arg0 ;
-(id)_fontWithDictionary:(id)arg0 ;
-(id)_gradientImageWithDictionary:(id)arg0 ;
-(id)_gradientLayerTypeForRawValue:(id)arg0 ;
-(id)_imageSymbolConfigurationScaleWithDictionary:(id)arg0 ;
-(id)_imageSymbolConfigurationStyleWithDictionary:(id)arg0 ;
-(id)_imageSymbolConfigurationTextStyleWithDictionary:(id)arg0 ;
-(id)_imageSymbolConfigurationWithDictionary:(id)arg0 ;
-(id)_impressionAnimationIdentifierWithDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif