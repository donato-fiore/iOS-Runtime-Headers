// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPLACEHOLDERIMAGEKEY_H
#define SKUIPLACEHOLDERIMAGEKEY_H

@class IKColor;

#import <Foundation/Foundation.h>


@interface SKUIPlaceholderImageKey : NSObject {
    NSInteger _height;
    NSInteger _imageTreatment;
    NSInteger _width;
    IKColor *_placeholderBackgroundColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithSize:(struct CGSize )arg0 imageTreatment:(NSInteger)arg1 placeholderBackgroundColor:(id)arg2 ;


@end


#endif