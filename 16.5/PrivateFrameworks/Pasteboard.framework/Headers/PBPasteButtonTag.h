// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBPASTEBUTTONTAG_H
#define PBPASTEBUTTONTAG_H

@class UISSlotTag;
@protocol NSSecureCoding;



@interface PBPasteButtonTag : UISSlotTag <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)calloutBarPasteButtonTagWithSecureName:(unsigned int)arg0 size:(struct CGSize )arg1 titleOrigin:(struct CGPoint )arg2 titleWidth:(CGFloat)arg3 contentScaleLevel:(NSUInteger)arg4 ;
+(id)contextMenuPasteButtonTagWithSecureName:(unsigned int)arg0 size:(struct CGSize )arg1 titleOrigin:(struct CGPoint )arg2 layoutSize:(NSInteger)arg3 hasTrailingGutter:(BOOL)arg4 ;
+(id)editMenuPasteButtonTagWithSecureName:(unsigned int)arg0 size:(struct CGSize )arg1 contentOrigin:(struct CGPoint )arg2 displayMode:(NSUInteger)arg3 ;
+(id)systemInputAssistantPasteButtonTagWithSite:(NSInteger)arg0 ;
+(id)undoInteractionHUDIconPasteButtonTagWithMinWidth:(CGFloat)arg0 ;
+(id)undoInteractionHUDTextPasteButtonTagWithMinWidth:(CGFloat)arg0 ;
-(NSUInteger)failGradeForStyle:(id)arg0 ;
-(NSUInteger)hitTestInformationMaskForStyle:(id)arg0 ;
-(float)backgroundStatisticsFailingContrastForStyle:(id)arg0 ;
-(float)backgroundStatisticsPassingContrastForStyle:(id)arg0 ;
// -(id)_acceptCalloutBarPasteButtonTagVisit:(id)arg0 systemInputAssistantPasteButtonTagVisit:(unk)arg1 undoInteractionHUDIconPasteButtonTagVisit:(id)arg2 undoInteractionHUDTextPasteButtonTagVisit:(unk)arg3 contextMenuPasteButtonTagVisit:(id)arg4 editMenuPasteButtonTagVisit:(unk)arg5  ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGColor *)baseForegroundColorForStyle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif