// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOPICKERRESIZETASKDESCRIPTOR_H
#define PUPHOTOPICKERRESIZETASKDESCRIPTOR_H

@class NSCountedSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUPhotoPickerResizeTaskDescriptor : NSObject <NSCopying>

 {
    NSCountedSet *_cachedAssetsIdentifiersForEstimation;
    NSUInteger _cachedSizeEstimate;
}


@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


+(id)defaultActualSizeDescriptor;
+(id)defaultLargeDescriptor;
+(id)defaultMediumDescriptor;
+(id)defaultSmallDescriptor;
+(id)orderedDefaultDescriptors;
-(BOOL)appliesToAsset:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)estimatedSizeForAssets:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formattedSizeForAssets:(id)arg0 ;
-(id)initWithLocalizedDescription:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(id)localizedDescriptionForAssets:(id)arg0 ;


@end


#endif