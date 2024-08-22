// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPAYMENTSHEETSYMBOLASSETCONFIGURATION_H
#define AMSPAYMENTSHEETSYMBOLASSETCONFIGURATION_H

@class NSString;
@protocol AMSPaymentSheetAssetConfiguration;

#import <Foundation/Foundation.h>


@interface AMSPaymentSheetSymbolAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration>



@property (readonly, copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger scale; // ivar: _scale
@property (readonly) Class superclass;


-(id)initWithName:(id)arg0 accessibilityText:(id)arg1 scale:(NSInteger)arg2 ;


@end


#endif