// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEAMENITIESPROVIDER_H
#define MKPLACEAMENITIESPROVIDER_H

@class NSArray, UIImage;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKPlaceAmenitiesProvider : NSObject {
    MKMapItem *_mapItem;
    NSArray *_amenityItems;
}


@property (readonly, nonatomic) UIImage *imageForApplePay;
@property (readonly, copy, nonatomic) NSArray *inlineAmenityList;


-(id)_stringForAmenity:(int)arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(void)_createAmenityItems;
-(void)refreshWithFont:(id)arg0 textColor:(id)arg1 ;


@end


#endif