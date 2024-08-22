// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMAGEDISPLAYSPEC_H
#define PHIMAGEDISPLAYSPEC_H


#import <Foundation/Foundation.h>


@interface PHImageDisplaySpec : NSObject

@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (nonatomic) CGSize fallbackTargetSizeIfRequestedSizeNotLocallyAvailable; // ivar: _fallbackTargetSizeIfRequestedSizeNotLocallyAvailable
@property (nonatomic) CGRect normalizedCropRect; // ivar: _normalizedCropRect
@property (nonatomic) CGSize targetSize; // ivar: _targetSize


-(BOOL)hasExplicitCrop;
-(BOOL)isTargetingMaximumSizeWithFullSizedWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(id)description;
-(id)init;
-(id)initWithTargetSize:(struct CGSize )arg0 ;
-(id)initWithTargetSize:(struct CGSize )arg0 contentMode:(NSInteger)arg1 ;
-(id)initWithTargetSize:(struct CGSize )arg0 contentMode:(NSInteger)arg1 normalizedCropRect:(struct CGRect )arg2 ;
-(id)shortDescription;
-(struct CGSize )requestSizeFromFullSizedWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;


@end


#endif