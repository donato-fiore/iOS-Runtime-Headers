// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSLINGUISTICASSETQUERY_H
#define DDSLINGUISTICASSETQUERY_H



#import "DDSAssetQuery.h"
#import "DDSLinguisticAttributeFilter.h"

@interface DDSLinguisticAssetQuery : DDSAssetQuery

@property (readonly, nonatomic) DDSLinguisticAttributeFilter *filter;


-(id)initWithLanguageIdentifier:(id)arg0 ;
-(void)addRegionWithCountry:(id)arg0 province:(id)arg1 city:(id)arg2 ;


@end


#endif