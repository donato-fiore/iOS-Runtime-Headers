// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEUTILITARIANSMALLRINGIMAGE_H
#define CLKCOMPLICATIONTEMPLATEUTILITARIANSMALLRINGIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"

@interface CLKComplicationTemplateUtilitarianSmallRingImage : CLKComplicationTemplate

@property (nonatomic) float fillFraction; // ivar: _fillFraction
@property (copy, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (nonatomic) NSInteger ringStyle; // ivar: _ringStyle


+(id)templateWithImageProvider:(id)arg0 fillFraction:(float)arg1 ringStyle:(NSInteger)arg2 ;
-(NSInteger)compatibleFamily;
-(id)initWithImageProvider:(id)arg0 fillFraction:(float)arg1 ringStyle:(NSInteger)arg2 ;
-(void)_enumerateFloatKeysWithBlock:(id)arg0 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;


@end


#endif