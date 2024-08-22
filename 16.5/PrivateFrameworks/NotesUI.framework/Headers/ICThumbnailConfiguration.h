// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTHUMBNAILCONFIGURATION_H
#define ICTHUMBNAILCONFIGURATION_H

@class ICAppearanceInfo, NSString, UIColor, UITraitCollection;

#import <Foundation/Foundation.h>

#import "ICThumbnailKey.h"

@interface ICThumbnailConfiguration : NSObject

@property (readonly, nonatomic) ICAppearanceInfo *appearanceInfo; // ivar: _appearanceInfo
@property (copy, nonatomic) id *associatedObject; // ivar: _associatedObject
@property (readonly, copy, nonatomic) NSString *associatedObjectIdentifier; // ivar: _associatedObjectIdentifier
@property (copy, nonatomic) NSString *associatedObjectTitle; // ivar: _associatedObjectTitle
@property (readonly, copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) NSInteger cacheLevel; // ivar: _cacheLevel
@property (copy, nonatomic) id *fallbackBlock; // ivar: _fallbackBlock
@property (readonly, nonatomic) BOOL hasBorder; // ivar: _hasBorder
@property (readonly, nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) NSInteger thumbnailType; // ivar: _thumbnailType
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, copy) ICThumbnailKey *uniqueKey; // ivar: _uniqueKey


-(id)debugDescription;
-(id)initForAttachment:(id)arg0 preferredSize:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceInfo:(id)arg3 ;
-(id)initForAvatarWithParticipants:(id)arg0 preferredSize:(struct CGSize )arg1 hasBorder:(BOOL)arg2 ;
-(id)initForNoteGridWithNote:(id)arg0 preferredSize:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceInfo:(id)arg3 ;
-(id)initForNoteListWithFoundAttachment:(id)arg0 preferredSize:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceInfo:(id)arg3 ;
-(id)initForNoteListWithNote:(id)arg0 preferredSize:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceInfo:(id)arg3 ;
-(id)initForNoteNavigationBarIconWithNote:(id)arg0 preferredSize:(struct CGSize )arg1 ;
-(id)initForSharePreviewThumbnailWithNote:(id)arg0 appearanceInfo:(id)arg1 ;
-(id)initForShareThumbnailWithNote:(id)arg0 appearanceInfo:(id)arg1 ;
-(id)initForSystemPaperChromeLayerWithThumbnailType:(NSInteger)arg0 traitCollection:(id)arg1 ;
-(id)initForSystemPaperChromeWithNote:(id)arg0 appearanceInfo:(id)arg1 ;
-(id)initForSystemPaperPreviewWithNote:(id)arg0 appearanceInfo:(id)arg1 ;
-(id)initForSystemPaperWidgetWithNote:(id)arg0 appearanceInfo:(id)arg1 ;
-(id)initWithThumbnailType:(NSInteger)arg0 associatedObject:(id)arg1 associatedObjectIdentifier:(id)arg2 associatedObjectTitle:(id)arg3 accountIdentifier:(id)arg4 cacheLevel:(NSInteger)arg5 preferredSize:(struct CGSize )arg6 scale:(CGFloat)arg7 appearanceInfo:(id)arg8 backgroundColor:(id)arg9 hasBorder:(BOOL)arg10 ;
-(id)initWithThumbnailType:(NSInteger)arg0 uniqueKey:(id)arg1 associatedObject:(id)arg2 associatedObjectIdentifier:(id)arg3 associatedObjectTitle:(id)arg4 accountIdentifier:(id)arg5 cacheLevel:(NSInteger)arg6 preferredSize:(struct CGSize )arg7 scale:(CGFloat)arg8 appearanceInfo:(id)arg9 backgroundColor:(id)arg10 hasBorder:(BOOL)arg11 ;


@end


#endif