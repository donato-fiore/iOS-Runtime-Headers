// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPRICEDESCRIPTION_H
#define GEOPRICEDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDPriceDescription.h"

@interface GEOPriceDescription : NSObject

@property (retain, nonatomic) GEOPDPriceDescription *geoPriceDescription; // ivar: _geoPriceDescription
@property (readonly, nonatomic) BOOL hasPriceDescription;
@property (readonly, nonatomic) NSString *priceDescription;


-(id)initWithGEOPDPriceDescription:(id)arg0 ;


@end


#endif