// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHPICKERFILTER_H
#define PHPICKERFILTER_H

@protocol NSCopying, PUPickerFilter;

#import <Foundation/Foundation.h>


@interface PHPickerFilter : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<PUPickerFilter> *_puPickerFilter; // ivar: __puPickerFilter


+(id)_depthEffectPhotosFilter;
+(id)allFilterMatchingSubfilters:(id)arg0 ;
+(id)anyFilterMatchingSubfilters:(id)arg0 ;
+(id)imagesFilter;
+(id)livePhotosFilter;
+(id)notFilterOfSubfilter:(id)arg0 ;
+(id)panoramasFilter;
+(id)playbackStyleFilter:(NSInteger)arg0 ;
+(id)screenRecordingsFilter;
+(id)screenshotsFilter;
+(id)slomoVideosFilter;
+(id)timelapseVideosFilter;
+(id)videosFilter;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithPUPickerFilter:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif