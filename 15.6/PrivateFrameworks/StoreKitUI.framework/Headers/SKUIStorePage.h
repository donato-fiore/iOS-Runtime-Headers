// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTOREPAGE_H
#define SKUISTOREPAGE_H

@class NSMutableDictionary, NSData, NSHTTPURLResponse, SSMetricsConfiguration, NSString, NSArray, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SKUIArtwork.h"
#import "SKUIProductPage.h"
#import "SKUIUber.h"

@interface SKUIStorePage : NSObject <NSCopying>

 {
    NSMutableDictionary *_values;
}


@property (retain, nonatomic) NSData *ITMLData; // ivar: _itmlData
@property (retain, nonatomic) NSHTTPURLResponse *ITMLResponse; // ivar: _itmlResponse
@property (retain, nonatomic) SKUIArtwork *backgroundArtwork; // ivar: _backgroundArtwork
@property (retain, nonatomic) SSMetricsConfiguration *metricsConfiguration; // ivar: _metricsConfiguration
@property (copy, nonatomic) NSString *metricsPageDescription; // ivar: _metricsPageDescription
@property (copy, nonatomic) NSArray *pageComponents; // ivar: _pageComponents
@property (copy, nonatomic) NSString *pageType; // ivar: _pageType
@property (copy, nonatomic) NSURL *pageURL; // ivar: _pageURL
@property (copy, nonatomic) SKUIProductPage *productPage; // ivar: _productPage
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) SKUIUber *uber; // ivar: _uber


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)valueForPageKey:(id)arg0 ;
-(void)setValue:(id)arg0 forPageKey:(id)arg1 ;


@end


#endif