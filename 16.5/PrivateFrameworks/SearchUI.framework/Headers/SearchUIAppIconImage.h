// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIAPPICONIMAGE_H
#define SEARCHUIAPPICONIMAGE_H

@class NSString;


#import "SearchUIImage.h"

@interface SearchUIAppIconImage : SearchUIImage

@property (retain) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) NSUInteger variant; // ivar: _variant


+(NSUInteger)bestVariantForSize:(struct CGSize )arg0 ;
+(id)appIconForBundleIdentifier:(id)arg0 variant:(NSUInteger)arg1 ;
+(id)appIconForBundleIdentifier:(id)arg0 variant:(NSUInteger)arg1 contentType:(id)arg2 ;
+(id)appIconForImage:(id)arg0 variant:(NSUInteger)arg1 ;
+(id)appIconForResult:(id)arg0 variant:(NSUInteger)arg1 ;
+(id)descriptorNameForVariant:(NSUInteger)arg0 ;
+(id)imageForIcon:(id)arg0 descriptor:(id)arg1 ;
+(int)iconFormatForVariant:(NSUInteger)arg0 ;
+(struct CGSize )sizeForVariant:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsTinting;
-(BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)generateImageWithFormat:(int)arg0 scale:(CGFloat)arg1 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 variant:(NSUInteger)arg1 contentType:(id)arg2 ;
-(id)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 ;
-(id)uniqueIdentifier;
-(int)defaultCornerRoundingStyle;
-(void)appIconWillChange:(id)arg0 ;
-(void)invalidateAppIcon;


@end


#endif