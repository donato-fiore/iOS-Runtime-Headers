// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVIMAGEDECORATOR_H
#define TVIMAGEDECORATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVImageDecorator : NSObject

@property (readonly, copy, nonatomic) NSString *decoratorIdentifier;
@property (readonly, nonatomic) CGSize expectedSize;
@property (readonly, nonatomic) BOOL loaderCropToFit;
@property (readonly, nonatomic) CGSize loaderScaleToSize;


-(BOOL)isEqual:(id)arg0 ;
-(id)decorate:(id)arg0 scaledWithSize:(struct CGSize )arg1 croppedToFit:(BOOL)arg2 ;


@end


#endif