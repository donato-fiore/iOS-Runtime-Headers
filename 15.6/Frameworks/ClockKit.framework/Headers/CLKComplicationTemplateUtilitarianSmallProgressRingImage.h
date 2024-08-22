// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEUTILITARIANSMALLPROGRESSRINGIMAGE_H
#define CLKCOMPLICATIONTEMPLATEUTILITARIANSMALLPROGRESSRINGIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"
#import "CLKProgressProvider.h"

@interface CLKComplicationTemplateUtilitarianSmallProgressRingImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (copy, nonatomic) CLKProgressProvider *progressProvider; // ivar: _progressProvider
@property (nonatomic) NSInteger ringStyle; // ivar: _ringStyle


+(id)templateWithImageProvider:(id)arg0 progressProvider:(id)arg1 ringStyle:(NSInteger)arg2 ;
-(NSInteger)compatibleFamily;
-(id)initWithImageProvider:(id)arg0 progressProvider:(id)arg1 ringStyle:(NSInteger)arg2 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateProgressProviderKeysWithBlock:(id)arg0 ;


@end


#endif