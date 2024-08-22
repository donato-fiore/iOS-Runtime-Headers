// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVISUALIDENTITYAVATARLAYOUTMANAGER_H
#define CNVISUALIDENTITYAVATARLAYOUTMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CNAvatarAccessoryView.h"

@interface CNVisualIdentityAvatarLayoutManager : NSObject

@property (retain, nonatomic) NSArray *avatarLayerItems; // ivar: _avatarLayerItems
@property (retain, nonatomic) NSArray *avatarViewAdHocLayoutConfiguration; // ivar: _avatarViewAdHocLayoutConfiguration
@property (retain, nonatomic) NSArray *avatarViewLayoutConfiguration; // ivar: _avatarViewLayoutConfiguration
@property (readonly, nonatomic) NSInteger maxAvatarCount; // ivar: _maxAvatarCount
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge; // ivar: _mediaContextBadge


-(BOOL)hasMediaContextBadge;
-(id)init;
-(id)layoutConfigurationForIndex:(NSInteger)arg0 inItemCount:(NSInteger)arg1 withLayoutType:(NSUInteger)arg2 ;
-(struct CGRect )adHocAvatarFrameInBounds:(struct CGRect )arg0 forItemCount:(NSInteger)arg1 ;
-(struct CGRect )adHocAvatarFrameInView:(id)arg0 forItemCount:(NSInteger)arg1 ;
-(struct CGRect )avatarFrameForFocusedAvatarInView:(id)arg0 ;
-(struct CGRect )avatarFrameInBounds:(struct CGRect )arg0 forItemCount:(NSInteger)arg1 ;
-(struct CGRect )avatarFrameInBounds:(struct CGRect )arg0 forItemCount:(NSInteger)arg1 withConfiguration:(id)arg2 ;
-(void)updateAvatarLayersForItemCount:(NSInteger)arg0 inView:(id)arg1 ;
-(void)updateAvatarLayersForItemCount:(NSInteger)arg0 inView:(id)arg1 withLayoutType:(NSUInteger)arg2 ;
-(void)updateAvatarLayersWithPrimaryAvatarForItemCount:(NSInteger)arg0 inView:(id)arg1 ;
-(void)updateLayer:(id)arg0 forItemCount:(NSInteger)arg1 atIndex:(NSInteger)arg2 inView:(id)arg3 withLayoutType:(NSUInteger)arg4 ;


@end


#endif