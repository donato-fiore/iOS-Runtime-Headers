// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDCOLLABORATIONATTRIBUTIONVIEWRENDERER_H
#define SLDCOLLABORATIONATTRIBUTIONVIEWRENDERER_H

@class UISSlotStyle;

#import <Foundation/Foundation.h>

#import "SLCollaborationAttributionViewMetricsProvider.h"
#import "SLDCollaborationAttributionViewSlotTag.h"

@interface SLDCollaborationAttributionViewRenderer : NSObject

@property (nonatomic, getter=isRTL) BOOL RTL; // ivar: _RTL
@property (retain, nonatomic) SLCollaborationAttributionViewMetricsProvider *metricsProvider; // ivar: _metricsProvider
@property (retain, nonatomic) UISSlotStyle *slotStyle; // ivar: _slotStyle
@property (retain, nonatomic) SLDCollaborationAttributionViewSlotTag *slotTag; // ivar: _slotTag


-(BOOL)shouldShowGenericIconIfApplicableForVariant:(NSInteger)arg0 ;
-(BOOL)shouldShowLabels;
-(BOOL)shouldShowMonogramIfApplicableForVariant:(NSInteger)arg0 ;
-(BOOL)shouldShowSnowglobeIfApplicableForVariant:(NSInteger)arg0 ;
-(BOOL)shouldShowSubtitle;
-(CGFloat)heightForLine:(struct __CTLine *)arg0 withOptions:(NSUInteger)arg1 ;
-(id)collaboratorsString;
-(id)collaboratorsStringPrefixingWith:(BOOL)arg0 ;
-(id)initWithStyle:(id)arg0 tag:(id)arg1 ;
-(id)withCollaboratorsString;
-(struct CGImage *)createAvatarImage;
-(struct CGImage *)createAvatarImageForConversationDrawingMetadata:(id)arg0 allowSnowglobe:(BOOL)arg1 allowMonogram:(BOOL)arg2 ;
-(struct CGImage *)createAvatarImageForRecipientDrawingMetadata:(id)arg0 allowMonogram:(BOOL)arg1 ;
-(struct CGImage *)createGroupPhotoImageFromFileURL:(id)arg0 ;
-(struct CGImage *)createGroupPhotoImageWithData:(id)arg0 ;
-(struct CGImage *)createGroupPhotoImageWithGroupID:(id)arg0 ;
-(struct CGImage *)createImageFromData:(id)arg0 ;
-(struct CGImage *)createMonogramImageForContact:(id)arg0 ;
-(struct CGImage *)createSnowglobeImageWithCGImages:(id)arg0 ;
-(struct CGRect )drawAvatarWithImageRef:(struct CGImage *)arg0 inContext:(struct CGContext *)arg1 ;
-(struct CGRect )drawGenericGlyphInContext:(struct CGContext *)arg0 ;
-(void)drawLine:(struct __CTLine *)arg0 inRect:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 ;
-(void)renderInContext:(struct CGContext *)arg0 ;


@end


#endif