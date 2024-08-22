// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREPLATFORMOFFERASSET_H
#define ICSTOREPLATFORMOFFERASSET_H

@class NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface ICStorePlatformOfferAsset : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGFloat previewDuration;
@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) NSInteger size;


-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif