// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBPASTEBUTTONTAG_H
#define PBPASTEBUTTONTAG_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBPasteButtonTag : NSObject <NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)calloutBarPasteButtonTagWithVariantIndex:(NSUInteger)arg0 size:(struct CGSize )arg1 titleOrigin:(struct CGPoint )arg2 contentScaleLevel:(NSUInteger)arg3 ;
+(id)calloutBarPasteButtonTagWithVariantIndex:(NSUInteger)arg0 size:(struct CGSize )arg1 titleOrigin:(struct CGPoint )arg2 titleWidth:(CGFloat)arg3 contentScaleLevel:(NSUInteger)arg4 ;
+(id)contextMenuPasteButtonTagWithVariantIndex:(NSUInteger)arg0 size:(struct CGSize )arg1 titleOrigin:(struct CGPoint )arg2 ;
+(id)systemInputAssistantPasteButtonTag;
+(id)undoInteractionHUDIconPasteButtonTagWithMinWidth:(CGFloat)arg0 ;
+(id)undoInteractionHUDTextPasteButtonTagWithMinWidth:(CGFloat)arg0 ;
-(NSUInteger)grade;
// -(id)_acceptCalloutBarPasteButtonTagVisit:(id)arg0 systemInputAssistantPasteButtonTagVisit:(unk)arg1 undoInteractionHUDIconPasteButtonTagVisit:(id)arg2 undoInteractionHUDTextPasteButtonTagVisit:(unk)arg3 contextMenuPasteButtonTagVisit:(id)arg4  ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif