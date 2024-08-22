// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIOIMAGESIZE_H
#define MIOIMAGESIZE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MIOImageSize : NSObject <NSCopying>

 {
    ImageFeatureType_ImageSize _imageSizeParams;
}


@property (readonly, nonatomic) NSInteger pixelsHigh;
@property (readonly, nonatomic) NSInteger pixelsWide;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSpecification:(*void)arg0 ;


@end


#endif