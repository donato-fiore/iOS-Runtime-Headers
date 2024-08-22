// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPAYMENTSHEETINLINEIMAGE_H
#define AMSPAYMENTSHEETINLINEIMAGE_H

@class NSString;
@protocol AMSPaymentSheetAssetConfiguration;

#import <Foundation/Foundation.h>


@interface AMSPaymentSheetInlineImage : NSObject

@property (readonly, copy, nonatomic) NSString *URLString; // ivar: _URLString
@property (readonly, nonatomic) NSInteger imageType; // ivar: _imageType
@property (readonly, nonatomic) NSObject<AMSPaymentSheetAssetConfiguration> *localAssetConfiguration; // ivar: _localAssetConfiguration
@property (readonly, nonatomic, getter=isServerSupplied) BOOL serverSupplied;
@property (readonly, nonatomic) BOOL tint;
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(id)textEncapsulationForServerValue:(id)arg0 ;
-(NSInteger)_defaultAssetType;
-(NSInteger)_ratingTypeForType:(id)arg0 ;
-(NSInteger)_scaleForString:(id)arg0 ;
-(id)_imageAssetConfigurationForDictionary:(id)arg0 ;
-(id)_symbolAssetConfigurationForDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithURLString:(id)arg0 ;


@end


#endif