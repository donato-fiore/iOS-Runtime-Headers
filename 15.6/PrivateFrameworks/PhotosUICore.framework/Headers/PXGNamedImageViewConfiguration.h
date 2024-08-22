// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGNAMEDIMAGEVIEWCONFIGURATION_H
#define PXGNAMEDIMAGEVIEWCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXGNamedImageViewConfiguration : NSObject <NSCopying>



@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif