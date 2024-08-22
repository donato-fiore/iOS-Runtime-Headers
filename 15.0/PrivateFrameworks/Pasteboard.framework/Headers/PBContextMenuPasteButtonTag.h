// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBCONTEXTMENUPASTEBUTTONTAG_H
#define PBCONTEXTMENUPASTEBUTTONTAG_H



#import "PBPasteButtonTag.h"

@interface PBContextMenuPasteButtonTag : PBPasteButtonTag

@property (readonly) CGSize size; // ivar: _size
@property (readonly) CGPoint titleOrigin; // ivar: _titleOrigin
@property (readonly) NSUInteger variantIndex; // ivar: _variantIndex


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)grade;
-(NSUInteger)hash;
// -(id)_acceptCalloutBarPasteButtonTagVisit:(id)arg0 systemInputAssistantPasteButtonTagVisit:(unk)arg1 undoInteractionHUDIconPasteButtonTagVisit:(id)arg2 undoInteractionHUDTextPasteButtonTagVisit:(unk)arg3 contextMenuPasteButtonTagVisit:(id)arg4  ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVariantIndex:(NSUInteger)arg0 size:(struct CGSize )arg1 titleOrigin:(struct CGPoint )arg2 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif