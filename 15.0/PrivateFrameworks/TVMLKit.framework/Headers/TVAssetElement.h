// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVASSETELEMENT_H
#define TVASSETELEMENT_H

@class NSString, IKAssetElement, NSURL, NSNumber;


#import "TVViewElement.h"

@interface TVAssetElement : TVViewElement

@property (readonly, nonatomic) NSString *actionParams;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) IKAssetElement *assetElement;
@property (readonly, nonatomic) NSURL *extrasURL;
@property (readonly, nonatomic) NSUInteger keyDelivery;
@property (readonly, nonatomic) NSNumber *persistentID;
@property (readonly, nonatomic) NSNumber *rentalAdamID;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, nonatomic) NSURL *url;


-(BOOL)isEqual:(id)arg0 ;


@end


#endif