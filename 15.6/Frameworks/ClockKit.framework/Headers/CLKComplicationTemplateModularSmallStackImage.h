// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEMODULARSMALLSTACKIMAGE_H
#define CLKCOMPLICATIONTEMPLATEMODULARSMALLSTACKIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateModularSmallStackImage : CLKComplicationTemplate

@property (nonatomic) BOOL highlightLine2;
@property (nonatomic) NSUInteger highlightMode; // ivar: _highlightMode
@property (copy, nonatomic) CLKImageProvider *line1ImageProvider; // ivar: _line1ImageProvider
@property (copy, nonatomic) CLKTextProvider *line2TextProvider; // ivar: _line2TextProvider


+(id)templateWithLine1ImageProvider:(id)arg0 line2TextProvider:(id)arg1 ;
+(void)imageSDKSize:(struct CGSize *)arg0 deviceSize:(struct CGSize *)arg1 forSDKVersion:(NSInteger)arg2 ;
-(NSInteger)compatibleFamily;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg0 ;
-(id)initPrivateWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(id)initWithLine1ImageProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif