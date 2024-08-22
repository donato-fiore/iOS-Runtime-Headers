// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMIMAGEBLUR_H
#define IMIMAGEBLUR_H

@class NSString;
@protocol IMImageModifier;

#import <Foundation/Foundation.h>


@interface IMImageBlur : NSObject <IMImageModifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(BOOL)hasModifications;
-(id)_backdropBlurSettings;
-(id)_blurredImageFromSourceImage:(id)arg0 ;
-(id)_lightBackdropBlurSettings;
-(id)_newBackdropSettings;
-(id)imageFromSourceImage:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 radius:(CGFloat)arg1 ;
-(id)modificationCacheKey;


@end


#endif