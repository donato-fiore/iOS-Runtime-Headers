// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGEPROCESSINGSETTINGS_H
#define BWSTILLIMAGEPROCESSINGSETTINGS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BWPhotoManifest.h"

@interface BWStillImageProcessingSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) int expectedClientImageCount;
@property (readonly, nonatomic) BWPhotoManifest *photoManifest; // ivar: _photoManifest
@property (readonly, nonatomic) BOOL processIntelligentDistortionCorrection; // ivar: _processIntelligentDistortionCorrection
@property (readonly, nonatomic) BOOL provideDemosaicedRaw; // ivar: _provideDemosaicedRaw


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhotoManifest:(id)arg0 processIntelligentDistortionCorrection:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif