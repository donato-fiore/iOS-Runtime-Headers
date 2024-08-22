// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOSTERCONFIGURATION_H
#define ATXPOSTERCONFIGURATION_H

@class NSString, NSArray, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXFaceGalleryItem.h"
#import "ATXComplication.h"

@interface ATXPosterConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy, nonatomic) NSString *color; // ivar: _color
@property (readonly, copy, nonatomic) NSArray *complications; // ivar: _complications
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, copy, nonatomic) NSString *font; // ivar: _font
@property (readonly, nonatomic) ATXFaceGalleryItem *galleryItem; // ivar: _galleryItem
@property (readonly, nonatomic) ATXComplication *inlineComplication; // ivar: _inlineComplication
@property (readonly, nonatomic) NSUUID *modeUUID; // ivar: _modeUUID
@property (readonly, copy, nonatomic) NSString *numberingSystem; // ivar: _numberingSystem
@property (readonly, copy, nonatomic) NSString *posterUUID; // ivar: _posterUUID
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPosterConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 active:(BOOL)arg1 selected:(BOOL)arg2 inlineComplication:(id)arg3 complications:(id)arg4 modeUUID:(id)arg5 font:(id)arg6 color:(id)arg7 numberingSystem:(id)arg8 posterUUID:(id)arg9 galleryItem:(id)arg10 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 selected:(BOOL)arg1 inlineComplication:(id)arg2 complications:(id)arg3 modeUUID:(id)arg4 active:(BOOL)arg5 source:(NSInteger)arg6 isCustomFont:(BOOL)arg7 isCustomColor:(BOOL)arg8 isCustomNumberingSystem:(BOOL)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif