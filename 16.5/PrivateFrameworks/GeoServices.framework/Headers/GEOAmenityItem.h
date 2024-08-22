// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOAMENITYITEM_H
#define GEOAMENITYITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDAmenityValue.h"

@interface GEOAmenityItem : NSObject {
    GEOPDAmenityValue *_amenityValue;
}


@property (readonly, nonatomic, getter=isAmenityPresent) BOOL amenityPresent;
@property (readonly, nonatomic) NSString *amenityTitle;
@property (readonly, nonatomic) int amenityType;
@property (readonly, nonatomic, getter=isApplePayAmenity) BOOL applePayAmenity;
@property (readonly, nonatomic) NSString *symbolImageName;


+(id)amenityItemsFromPDAmenityItems:(id)arg0 ;
-(id)description;
-(id)initWithAmenityValue:(id)arg0 ;


@end


#endif