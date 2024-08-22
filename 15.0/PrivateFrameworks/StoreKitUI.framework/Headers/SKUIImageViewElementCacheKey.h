// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIIMAGEVIEWELEMENTCACHEKEY_H
#define SKUIIMAGEVIEWELEMENTCACHEKEY_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface SKUIImageViewElementCacheKey : NSObject {
    NSInteger _imageTreatment;
    CGSize _size;
    NSURL *_url;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithURL:(id)arg0 size:(struct CGSize )arg1 imageTreatment:(id)arg2 ;


@end


#endif