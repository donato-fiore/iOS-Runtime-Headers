// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVIMAGEELEMENT_H
#define TVIMAGEELEMENT_H

@class NSURL, NSDictionary;


#import "TVViewElement.h"

@interface TVImageElement : TVViewElement

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSInteger imageType;
@property (readonly, nonatomic) NSDictionary *srcset;


-(struct CGSize )imageScaleToSize;


@end


#endif