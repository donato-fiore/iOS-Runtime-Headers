// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPITEMPHOTOOPTIONS_H
#define GEOMAPITEMPHOTOOPTIONS_H


#import <Foundation/Foundation.h>


@interface GEOMapItemPhotoOptions : NSObject

@property (readonly, nonatomic) BOOL allowSmaller; // ivar: _allowSmaller
@property (readonly, nonatomic) NSInteger preferredCropStyle; // ivar: _preferredCropStyle
@property (readonly, nonatomic) NSInteger preferredFormat; // ivar: _preferredFormat


+(id)defaultPhotoOptionsWithAllowSmaller:(BOOL)arg0 ;
+(id)defaultPhotoOptionsWithCropStyle:(NSInteger)arg0 ;
-(id)initWithAllowSmaller:(BOOL)arg0 cropStyle:(NSInteger)arg1 format:(NSInteger)arg2 ;


@end


#endif