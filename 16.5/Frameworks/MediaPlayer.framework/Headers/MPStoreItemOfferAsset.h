// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTOREITEMOFFERASSET_H
#define MPSTOREITEMOFFERASSET_H

@class NSString, NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface MPStoreItemOfferAsset : NSObject

@property (readonly, nonatomic) CGFloat duration;
@property (readonly, copy, nonatomic) NSString *flavor;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary; // ivar: _lookupDictionary
@property (readonly, nonatomic) CGFloat previewDuration;
@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) NSInteger size;


-(id)initWithLookupDictionary:(id)arg0 ;


@end


#endif