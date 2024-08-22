// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSLINGUISTICATTRIBUTEFILTER_H
#define DDSLINGUISTICATTRIBUTEFILTER_H



#import "DDSAttributeFilter.h"

@interface DDSLinguisticAttributeFilter : DDSAttributeFilter



-(void)addAssetLocale:(id)arg0 ;
-(void)addContentItemLocale:(id)arg0 ;
-(void)addContentType:(id)arg0 ;
-(void)addRegionWithCountry:(id)arg0 province:(id)arg1 city:(id)arg2 ;


@end


#endif